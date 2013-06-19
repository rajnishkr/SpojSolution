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
#include<queue>
using namespace std;
vector<int> v[1010];
int w[1111];
int edge[1111][2];


int bfs(int n,int rem1,int rem2)
{
     int vis[1111]={0},temp,sum=w[n];
     queue<int> q;
     q.push(n);
     vis[n]=1;
     
     while(!q.empty()) {
           temp=q.front();
           q.pop();
           int len=v[temp].size();
           for(int j=0;j<len;j++)
           {
                   if((temp==rem1 && v[temp][j]==rem2 )||  (temp==rem2 && v[temp][j]==rem1 )) 
                   continue;
                   if(!vis[v[temp][j]])
                   {
                         sum+=w[v[temp][j]];
                         q.push(v[temp][j]);
                         vis[v[temp][j]]=1;
                   }
           }
     }
     return sum;
}
                       
     
int main(){
int test,sum,mn;
SS(test);
while(test--)
{
  
  
  sum=0; mn=inf;
  int n,k,l;
  SS(n);
  for(int i=0;i<n;i++)
  {
          v[i].clear();
          SS(w[i]);
          sum+=w[i];
          
          
  }
  cout<<sum<<endl;
  for(int i=0;i<n-1;i++)
  {
        SS(k);
        SS(l);
        v[k].pb(l);
        v[l].pb(k);
        edge[i][0]=k;
        edge[i][1]=l;
  }                      
  
  for(int i=0;i<n-1;i++) {
          k=bfs(0,edge[i][0],edge[i][1]);
          cout<<k<<endl;
          int temp;
          temp=sum-k;
          mn=min(mn,abs(temp-k));
  }
  
  cout<<mn<<endl;
                     
          
  
}
system("pause");
return 0;
}
