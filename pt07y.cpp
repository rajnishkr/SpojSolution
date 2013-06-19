#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<vector>
using namespace std;

vector<int> v[10000];
int n,m;
bool vis[10000]={0};

void dfs(int i)
{
     
     vis[i]=1;
     for(int j=0;j<v[i].size();j++)
     {
             if(vis[v[i][j]]==0)
             dfs(v[i][j]);
     }
     return ;
}
int main(){
 
    int j,k;
    scanf("%d%d",&n,&m);
    if(m!=n-1)
    printf("NO\n");
    else
    {
        for(int i=0;i<m;i++)
        {
                scanf("%d%d",&j,&k);
                v[j-1].push_back(k-1);
                v[k-1].push_back(j-1);
        }
        for(int i=0;i<n;i++)
        {
                if(v[i].size()!=0)
                {dfs(i);
                break;
                }
        }
        bool flag=1;
        for(int i=0;i<n;i++)
        if(vis[i]==0)
        {flag=0; 
        break;
        }
        
        if(flag==1)
        printf("YES\n");
        else
        printf("NO\n");
    }   
    return 0;
}
