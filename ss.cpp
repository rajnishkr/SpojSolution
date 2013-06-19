#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
long long arr[705];
long long max(long long a,long long b)
{
     return (a>b) ?  a :  b;
}
long long dp(int i)
{     long k=i;
      if(i<=0)
      return 0;
      
     if(arr[i]!=0)
     return arr[i];
     
     for(int j=2;j<i;j++)
             k= max(k,dp(i-j)*dp(j));
     arr[i]=k;
     return k;
}

int main(){
    //memset(arr,-1,sizeof(arr));
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;
    arr[4]=4;
    int n; 
    scanf("%d",&n);
    int x,y;
    for(int i=0;i<n-1;i++)
    scanf("%d%d",&x,&y);
    printf("%lld",dp(n));
   // for(int i=0;i<=n;i++)
    //cout<<arr[i]<<" ";
    cin>>n;
return 0;
}
