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
  
 int x,x1;         
for(int i=1;i<=tw;i++) {
x = INT_MAX;
for(int j=1;j<=n;j++) {
x1 = 0;
if(i >= w[j])
if(arr[i-w[j]] > 0 || i == w[j]) 
x1 = profit[j] + arr[i-w[j]];
if(x1 < x && x1!=0)
 x = x1;
}

if(x==INT_MAX) 
arr[i] = 0;
else arr[i] = x;
}      
            
if(arr[tw]!=0)
printf("The minimum amount of money in the piggy-bank is %lld.\n",arr[tw]);
 else
 printf("This is impossible.\n");             
}
return 0;
}

