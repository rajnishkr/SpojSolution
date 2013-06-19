#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int color[2001];
bool vis[2001];
vector<int> v[2001];
int n;


int bfs(){
    
     queue<int> q;
     int m;
     for(int p=1;p<=n;p++)
     {
     if(vis[p]==false && v[p].size()>0)
     {
     q.push(p);
     
     while(!q.empty())
      {  
         m=q.front();
         q.pop(); 
         vis[m]=true;          
      for(int i=0;i<v[m].size();i++)
     {
            int c=color[m]%2+1;
            if(color[v[m][i]])
            {if(color[v[m][i]] !=c)
            return 0;
            }
            else
            color[v[m][i]]=c;
            if(vis[v[m][i]]==false)
            q.push(v[m][i]);
     }  
     }
}
}

return 1;
}    


int main(){
 int test,l=1;
 cin>>test;
 while(test--)
 {
              int in,x,y;
              cin>>n>>in;
             
             
             for(int i=0;i<=n;i++)
              {
              color[i]=0;
              vis[i]=false;
              v[i].clear();
              }
              color[1]=1;
              for(int i=0;i<in;i++)
              { scanf("%d%d",&x,&y);
                v[x].push_back(y);
                v[y].push_back(x);
              }
    
              int r=bfs();
              printf("Scenario #%d:\n",l++);
              if(r)
               printf("No suspicious bugs found!\n");
              else
               printf("Suspicious bugs found!\n");             
}
return 0;
}
