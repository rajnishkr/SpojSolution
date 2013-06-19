#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int n,m;
int k;
char str[51][51];
bool vis[52][52];

void dfs(int i,int j,int index)
{  
    k=max(k,index); 
    if(vis[i][j])
    return;
    vis[i][j]=true;
    
     for(int i1=-1;i1<=1;i1++)
     for(int j1=-1;j1<=1;j1++)
     {
             int tempx=i+i1,tempy=j1+j,ind;
             if(tempx<0 || tempx>n-1 || tempy<0 || tempy>m-1)
             continue;
             ind=str[tempx][tempy]-'A';
             if(ind==index+1)
             dfs(tempx,tempy,index+1);
     }
}
     
int main(){
int l=1;
while(1)
{
        scanf("%d%d",&n,&m);
        if(n==0 && m==0)
        break;
         for(int i=0;i<n;i++)
            scanf("%s",str[i]);
        int count=0;
        bool flag=false;
        for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
        vis[i][j]=false;
        for(int i=0;i<n;i++)
        {        
                for(int j=0;j<m;j++)
                if(str[i][j]=='A')
                {                 
                                  //initi();
                                  flag=true;
                                  k=0;
                                  dfs(i,j,0);
                                  count=max(count,k);
                }
        }
        if(flag)
        printf("Case %d: %d\n",l++,count+1);
        else
         printf("Case %d: %d\n",l++,0);
}
return 0;
}
