#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long arr[n];
    long long sum=0;
    
    for(int i=0;i<n;i++)
       scanf("%lld",&arr[i]);
    for(int i=0;i<n-1;i++)
    sum+=max(arr[i],arr[i+1]);
           
            cout<<sum<<endl;
           
   //cin>>sum;
  return 0;
}
            

