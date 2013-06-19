#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[100001];
int sol[100001];
int dp[100004];
int n,m;
int fun(int m)
{
    dp[m]=0;
    dp[m+1]=0;
    for(int i=m-1;i>=0;i--)
    dp[i]=max(dp[i+2]+arr[i],dp[i+1]);
    return dp[0];
}
    
int main(){
    while(1)
    {
            scanf("%d%d",&n,&m);
            if(n==0)
            break;
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<m;j++)
                    scanf("%d",&arr[j]);
                    sol[i]=fun(m);
            }
            for(int i=0;i<n;i++)
            arr[i]=sol[i];
            cout<<fun(n)<<endl;
}
return 0;
}
