#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v[100001];
bool vis[100001]={false};
int n;
int rec(int i,int c,int e,int co)
{
    if(e==0)
    return co;
    if(c & (1<<i))
    return co;
    if(v[i].size()==0)
    return co;
    int r=n-1,r=0;
    int k=c |(1<<i);
    cout<<k<<endl;
    for(int j=0;j<v[i].size();j++)
        if(!(c & (1<<v[i][j])))
        r++;
    co=co+1;
    e=e-r;
     for(int j=0;j<v[i].size();j++)
        if(!(c & (1<<v[i][j])))
         rec(v[i][j],c,e,co);
         return co;
            
     }
          
    
    
    
    

int main(){
    
    cin>>n;
    int x,y;
    for(int i=0;i<n-1;i++)
    { 
      scanf("%d%d",&x,&y);
      v[x].push_back(y);
      v[y].push_back(x);
    }
    int c=1;
    int count=rec(1,c,n-1,0);
    cout<<count;
    cin>>count;
    
return 0;
}
