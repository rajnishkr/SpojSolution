#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
vectro<int> v[5005];
vector<int> reverse[5005];
node {
     int in;
     int out;
     };
int time;
bool vis[5002];
int n,m;

void dfs(int i)
{    node arr;
     arr.in=++time;
     for(int j=0;j<v[i].size;j++)
     if(!v[i][j])
     dfs(j);
     arr.out=++time;
     return ;
}

int main(){
    while(1){
             
    scanf("%d",&n);
    if(n==0)
    break;
    scanf("%d",&m);
    int x,y;
    for(int i=0;i<m;i++)
    {
            scanf("%d%d",&x,&y);
            x--;
            y--;
            v[x].push_back(y);
            reverse[y].push_back(x);
    }
    node arr[n];
    time=0;
    for(int i=0;i<n;i++)
    if(vis[i]==false)
    dfs(i);
    
      




return 0;
}
