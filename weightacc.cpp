#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n;
       scanf("%d",&n);
       int N=n;
       int ar[n];
       while(N--)
       scanf("%d",&ar[n-1-N]);
       int wt[n];
       wt[0]=1;
       if(n==1)
       {
           printf("%d\n",ar[0]);
           continue;
       }
       wt[1]=2;
       if(n==2)
       {
           printf("%d\n",(ar[0]+2*ar[1]));
           continue;
       }
       int flag[n],sum=0;
       for(int i=2;i<n;++i)
       {
               flag[i]=1;
               sum+=ar[i];
       }
       flag[0]=1;
       flag[1]=1;
       for(int i=2;i<n;i++)
       {
           if(ar[i]<0)
           {
           
               if(sum>=0)
               {
                   flag[i]=1;
                   break;
                   //wt[i]=wt[i-1]+1;
               }
               else
                   flag[i]=0;
                   //wt[i]=2;
           }
           else
               flag[i]=1;
           sum=sum-ar[i];
       }
       
       long long int sum1=ar[0]+2*ar[1];
       for(int i=2;i<n;++i)
       {
           if(flag[i])
           {
               wt[i]=wt[i-1]+1;
               sum1+=(wt[i]*ar[i]);
               
           }
           else
           {
               wt[i]=2;
               sum1+=(2*ar[i]);
           }
       }
      cout<<sum1<<endl;
   }
}
