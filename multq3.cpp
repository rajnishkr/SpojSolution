#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int rem0[600001];
int rem1[600001]={0};
int rem2[600001]={0};
int flag[600001]={false};
void create(int b,int e,int index)
{
   rem0[index]=e-b+1;
   if(b==e)
   { rem0[index]=1;
   return;}
   create(b,(b+e)/2,2*index+1);
   create((b+e)/2+1,e,2*index+2);
  
   return; 
}
inline void fun(int i,int index)
{      int c=0;
     if(i==1)
     {
        c=rem0[index];
        rem0[index]=rem2[index];
        rem2[index]=rem1[index];
        rem1[index]=c;
     }
     else
     {
         c=rem0[index];
         rem0[index]=rem1[index];
         rem1[index]=rem2[index];
         rem2[index]=c;
     }
     return;
}
void update(int i,int j,int b,int e,int index)
{
    if(e<i || b>j)
    return;
    int left=2*index+1,right=2*index+2;
    if(i<=b && j>=e)
    {   //cout<<"hi"<<endl;
          
          flag[index]=(flag[index]+1)%3;
          int p=flag[index];
          if(p)
          {
          fun(p,index);
          if(b!=e)
          {
          flag[left]=(flag[left]+p)%3;
          flag[right]=(flag[right]+p)%3;
          }
          flag[index]=0;
          }
          return;
    }
    update(i,j,b,(b+e)/2,left);
    update(i,j,(b+e)/2+1,e,right);
    int c,d,e2,c1,d1,e1;
    int ind=2*index+1;
    int k=flag[ind];
       if(k==1)
       {
               c=rem0[ind];
               d=rem1[ind];
               e1=rem2[ind];
       }
       else if(k==2)
       {
            c=rem2[ind];
            d=rem0[ind];
            e1=rem1[ind];
       }
       else
       {
           c=rem1[ind];
           d=rem2[ind];
           e1=rem0[ind];
       }
       ind=2*index+2;
       k=flag[ind];
       if(k==1)
       {
               c1=rem0[ind];
               d1=rem1[ind];
               e2=rem2[ind];
       }
       else if(k==2)
       {
             c1=rem2[ind];
            d1=rem0[ind];
            e2=rem1[ind];
       }
       else
       {
            c1=rem1[ind];
           d1=rem2[ind];
           e2=rem0[ind];
       }
       rem1[index]=c+c1;
       rem2[index]=d+d1;
       rem0[index]=e2+e1;
       return;
}

int query(int i,int j,int b,int e,int index)
{
    if(e<i || b>j)
    return 0;
    if(flag[index])
    {
          fun(flag[index],index);
          if(b!=e){
          flag[2*index+1]=(flag[2*index+1]+flag[index])%3;
          flag[2*index+2]=(flag[2*index+2]+flag[index])%3;}
          flag[index]=0;
          
    }
    if(i<=b && e<=j)
       return rem0[index];
    return query(i,j,b,(b+e)/2,2*index+1)+query(i,j,(b+e)/2+1,e,2*index+2);
 }
   
int main(){
    int n=0;
    int q=0;
    char c;
    while((c=getchar())!=' ')
    n=n*10+c-'0';
    create(0,n-1,0);
    while((c=getchar())!='\n')
    q=q*10+c-'0';
    while(q--)
    {
     int s=0,i=0,j=0;
     while((c=getchar())!=' ')
     s=s*10+(c-'0');
     while((c=getchar())!=' ')
     i=i*10+(c-'0');
    while((c=getchar())!='\n')
     j=j*10+(c-'0');
   //  cout<<n<<q<<s<<i<<j<<endl;
     if(s==0)
             update(i,j,0,n-1,0);
     else
         printf("%d\n",query(i,j,0,n-1,0));
    }
return 0;
}
