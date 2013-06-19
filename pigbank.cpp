#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<limits>
using namespace std;
int main(){
int test;
cin>>test;
while(test--)
{
            long long pw,tw;
             cin>>pw>>tw;
             tw=tw-pw;
             long long int arr[tw+1];
             for(int i=0;i<=tw;i++)
             arr[i]=0;
                                  
             int n;
             cin>>n;
             int profit[n+1],w[n+1];
             for(int i=1;i<=n;i++)
             cin>>profit[i]>>w[i];
             
             for(int i=1;i<=n;i++)
             {
                     long long j=w[i],p=0;
                     while(j<=tw)
                     {   if(arr[j]!=0)
                        arr[j]=min(p+profit[i],arr[j]);
                        else
                        arr[j]=p+profit[i];
                        p=arr[j];
                        j=j+w[i];   
                     }
             }
             if(arr[tw]!=0)
             printf("The minimum amount of money in the piggy-bank is %lld.\n",arr[tw]);
             else
             printf("This is impossible.\n");             
}
return 0;
}

