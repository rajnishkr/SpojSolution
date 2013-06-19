#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v[5005];
vector<int> r[5005];
bool vis1[5002],out[5005],vis3[5005];
int vis2[5004];
vector<int> first,second;
void dfs(int i)
{   
     vis1[i]=true;
     for(int j=0;j<v[i].size();j++)
     if(vis1[v[i][j]]==false)
     dfs(v[i][j]);
     
     first.push_back(i);
     return ;
}

void dfs2(int i,int sc)
{
     vis2[i]=sc;
     
     for(int j=0;j<r[i].size();j++)
     if(vis2[r[i][j]]==-1)
     dfs2(r[i][j],sc);
     else
     {
         if(vis2[r[i][j]]<sc)
         if(vis3[r[i][j]]==0)
         {
         vis3[r[i][j]]==true;
         second.push_back(vis2[r[i][j]]);
         }
         
     }
     return;
}

int main(){
    while(1){
     int n,m;        
    scanf("%d",&n);
    if(n==0)
    break;
    for(int i=0;i<=n;i++)
    {
            v[i].clear();
            r[i].clear();
            vis1[i]=false;
            vis2[i]=-1;
            out[i]=false;
            vis3[i]=false;
    }
    first.clear();
    second.clear();     
    scanf("%d",&m);
    int x,y;
    for(int i=0;i<m;i++)
    {
            scanf("%d%d",&x,&y);
            x--;
            y--;
            v[x].push_back(y);
            r[y].push_back(x);
    }
    for(int i=0;i<n;i++)
    if(vis1[i]==false)
    dfs(i);
    
    int sc=-1;
    for(int i=n-1;i>=0;i--)
    if(vis2[first[i]]==-1)
   {
   sc++;
   dfs2(first[i],sc);
   }
   
   for(int i=0;i<second.size();i++)
   {for(int j=0;j<n;j++)
   if(second[i]==vis2[j])
   out[j]=true;
  }
   
   //print
   int i;
   for(i=0;i<n;i++)
   if(out[i]==false)
    { cout<<i+1; 
    break; 
    }
   
            
   i++;  
   for(;i<n;i++) 
   if(out[i]==false)
    cout<<" "<<i+1;
           
   cout<<endl;
}
return 0;
}

