#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int c_arr[600001]={0};
int flag[600001]={0};

void update(int i,int j,int b,int e,int index)
{  
     if(e<i || b>j)
     return;
     
     if(i<=b && e<=j)
     { 
      flag[index]=(flag[index]+1)%2;
      if(flag[index])
      {
                     c_arr[index]=(e-b+1)-c_arr[index];
      
      flag[2*index+1]=(flag[2*index+1]+1)%2;
      flag[2*index+2]=(flag[2*index+2]+1)%2; 
      flag[index]=0;
      }
      return ;     
     }
     
     update(i,j,b,(b+e)/2,2*index+1);
     update(i,j,(b+e)/2+1,e,2*index+2);
     
     int c=c_arr[2*index+1],d=c_arr[2*index+2];
     
     if(flag[2*index+1])
     c= (((b+e)/2-b)+1) -c;
     
     if(flag[2*index+2])
     d=(e-((b+e)/2+1))+1 -d;
     
     c_arr[index]=c+d;
     
     return;
 }
 
 int query(int i,int j,int b,int e,int index)
 {
       if(e<i || b>j)
       return 0;
       if(flag[index])
       {
                      flag[index]=0;
                      c_arr[index]=(((e-b)+1)-c_arr[index]);
                      flag[2*index+1]=(flag[2*index+1]+1)%2;
                      flag[2*index+2]=(flag[2*index+2]+1)%2;
       }
       if(i<=b && e<=j)
       return c_arr[index];
       
       return query(i,j,b,(b+e)/2,2*index+1)+query(i,j,(b+e)/2+1,e,2*index+2);
 }

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    while(m--)
    {
              int s,i,j;
              scanf("%d%d%d",&s,&i,&j);
              if(s==1)
              printf("%d\n",query(i-1,j-1,0,n-1,0));
              else
              update(i-1,j-1,0,n-1,0);
    
}
return 0;
}
