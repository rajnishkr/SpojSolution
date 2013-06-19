#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<sstream>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
using namespace std;
struct node{
       int val;
       int found;
       int low;
       int parent;
       bool vis;
       };   
vector<node> vec;
node temp;
vector<int> adj[101];
int cnt,res,v1;

void mad(int i)
{
     if(vec[i].vis)
     return;
     vec[i].val=cnt++;
     cout<<i<<endl;
     vec[i].vis=true;
     for(int j=0;j<adj[i].size();j++)
     {
             v1=adj[i][j];
             if(!vec[v1].vis)
             {              
              vec[v1].parent=i;
              mad(v1);
             }
     }
}

void post(int i)
{
     vec[i].low=vec[i].val;
     for(int j=0;j<adj[i].size();j++)
     {
             v1=adj[i][j];
             if(vec[v1].val>vec[i].val) {
                    post(v1);
                    if(vec[v1].low>=vec[i].val && !vec[i].found) {res++; vec[i].found=1;
                    cout<<i<<endl;}
                    vec[i].low=min(vec[i].low,vec[v1].low);
             }
             else {
                  if(vec[i].parent!=v1) vec[i].low=min(vec[i].low,vec[v1].val);
             }
     }
}


                                        
               
int main(){
  int i,j,n,x,k;
  vec.clear();
  while(cin>>n) {
       if(!n) break; 
               
       for(k=0;k<=n;k++)
       {
       adj[k].clear();
       vec.pb(temp);
       vec[k].vis=false;
       vec[k].found=0;
       }
       string s;
       getline(cin,s);
        //cout<<"aaya"<<endl;
        while(1){
                 getline(cin,s);
                 stringstream stream1;
                // stream1.clear();
                 stream1.str(s);
                 stream1>>x;
                 //cout<<x<<endl;
                 int y=x;
                 if(y!=0)
                 while(stream1>>x)
                 {
                        adj[y-1].pb(x-1);
                       //cout<<y<<x<<endl;
                 }
                 else
                 break;
        }
        cnt=0;
        res=0;
        
        for(k=0;k<n;k++)
        {
        if(adj[k].size()!=0)
        mad(k);
        }
        /*for( j=0;j<adj[k].size();j++)
        cout<<adj[k][j]<<" ";
        cout<<endl; */
        //}
        
        for( k=0;k<n;k++)
        {
         cout<<vec[k].val<<" ";
         }
         cout<<endl;  
        for(k=0;k<n;k++) 
        post(k);
        for( k=0;k<n;k++)
        {
         cout<<vec[k].low<<" ";
         }
         cout<<endl;
        cout<<res<<endl;
        }
        
//system("pause");
return 0;
}
