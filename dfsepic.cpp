#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
using namespace std;
int n,m;
int arr[10][10];
bool vis[10][10];
int c[10][10];

int x=0,y=0,ma=0;
int posx[4]={-1,0,0,1};
int posy[4]={0,1,-1,0};
int dfs(int i,int j)
{
    int tempx,tempy,k=0;
     if(vis[i][j])
     return c[i][j];
     
     vis[i][j]=true;
     
     for(int l=0;l<4;l++)
     {
             tempx=i+posx[l];
             tempy=j+posy[l];
             if(tempx <0 || tempy<0 || tempx>=n || tempy>=m)
             continue;
             
             if(abs(arr[tempx][tempy]-arr[i][j])==1) 
                k=max(k,dfs(tempx,tempy)+1);
             
     }
     c[i][j]=k;
     if(k>ma)
     {
                   ma=k;
                   x=i;
                   y=j;
     }
     //cout<<c[i][j]<<i<<" "<<j<<endl;
     //system("pause");
     return k;
}
                    
     
     
int main(){
    
    SS(n);
    SS(m);
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<m;j++)
            {
                    SS(arr[i][j]);
                    c[i][j]=1;
                    vis[i][j]=false;
            }
    }
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<m;j++)                              
            {
                    if(vis[i][j]==0)
                    dfs(i,j);
            }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cout<<c[i][j]<<" ";
    cout<<endl;}
    
    cout<<ma<<x<<y<<endl;
    
    
system("pause");

return 0;
}
