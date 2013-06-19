#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define LL long long
#include<cmath>
using namespace std;
LL sum[600005];
LL val[600005];
 int i,j;
void update(int b,int e,LL v,int index)
{
           if(i>e || j<b)
           return ;
           //cout<<b<<" "<<e<<" "<<i<<j<<" "<<endl;
           int left=2*index+1,right=2*index+2;
           if(val[index])
           {
                   sum[index]+=(val[index])*(e-b+1);
                   if(b!=e)
                   {
                   val[left]+=val[index];
                   val[right]+=val[index];
                   }
                   val[index]=0;
           }
           if(i<=b && e<=j)
           {     
                   sum[index]+=v*(e-b+1);
                   //val[index]=0;
               //    cout<<sum[index]<<endl;
                   if(b!=e)
                   {
                   val[left]+=v;
                   val[right]+=v;
              }
               return;           
           }
           update(b,(b+e)/2,v,left);
           update((b+e)/2+1,e,v,right);
           sum[index]=sum[left]+sum[right]+val[left]*((e+b)/2-b+1)+val[right]*(e-(e+b)/2);
           return ;           
}
LL query(int b,int e,int index)
{
  
   int right=2*index+2,left=2*index+1;
   if(val[index])
   {
        sum[index]+=val[index]*(e-b+1);
        if(b!=e)
        {
        val[right]+=val[index];
        val[left]+=val[index];
        }
        val[index]=0;
   }
    if(i>e || j<b)
   return 0;
   if(i<=b && j>=e)
   return sum[index];  
   return query(b,(b+e)/2,left)+query((b+e)/2+1,e,right);
}                 
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
                 int n,q,c;
                 
                 scanf("%d%d",&n,&q);
                 LL v,len=2*((LL)pow((double)2,log2(n)+1)+1);
                 for(i=0;i<=len;i++)
                 {  sum[i]=0;
                    val[i]=0;
                 }
                 while(q--)
                 {
                           scanf("%d%d%d",&c,&i,&j);
                           i--;j--;
                           if(c==0)
                           {scanf("%lld",&v);
                            update(0,n-1,v,0);
                           }
                           else
                           printf("%lld\n",query(0,n-1,0));
                 }
    }
//system("pause");
return 0;
}
