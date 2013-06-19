#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int posx[4]={0,1,-1,0};
int posy[4]={-1,0,0,1};
int arr[24][24];
int dp[24][24];
int n,m;
int fun(int sum,int i,int j,bool vis[23][23])
{   cout<<i<<" "<<j<<" "<<sum<<endl;
    system("pause");
    if(i<1 || i>n || j>m || j<1)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int s1=sum-arr[i-1][j]-arr[i][j-1]-arr[i][j+1]-arr[i+1][j];
    int s=0;
    int tempx,tempy;
    for(int k=0;k<4;k++)
    {       tempx=i+posx[k];
            tempy=j+posy[k];
            if(tempx==0 || tempx>n || tempy>m || tempy==0)
            if()
            continue;
            s=s+fun(sum-arr[i][j],tempx,tempy);
    }
    dp[i][j]=max(s,s1);
    return dp[i][j];
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
                 scanf("%d%d",&n,&m);
                 int sum=0;
                 for(int i=0;i<23;i++)
                 for(int j=0;j<23;j++)
                 {       if((i>0 &&i<=n) && (j>0 && j<=m))       
                         {scanf("%d",&arr[i][j]);
                          sum=sum+arr[i][j];
                          }
                         else
                         arr[i][j]=0;
                         dp[i][j]=-1;
                         
                 }
                  sum=fun(sum,1,1);
                 printf("%d\n",sum);
    }
return 0;
}
