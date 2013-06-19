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
vector<int> v[100];
vector<int> display[100];
struct node {
       int level;
       int ind;
       };

int main(){
int n;
SS(n);
int p=0,x;
for(int i=0;i<n;i++)
{
        SS(x);
        if(x==-1)
        p=i;
        else
        v[x].pb(i);
}
queue<node> q;
node temp;
temp.level=0;
temp.ind=p;
int l=0;
q.push(temp);
display[0].pb(p);
while(!q.empty())
{
node t=q.front();
node t1;
q.pop();
for(int i=0;i<v[t.ind].size();i++)
{       
        t1.ind=v[t.ind][i];
        t1.level=t.level+1;
        l=max(l,t1.level);
        display[t.level+1].pb(v[t.ind][i]);
        q.push(t1);
}
}
//cout<<l<<endl;
for(int i=l;i>=0;i--)
{
        for(int j=0;j<display[i].size();j++)
        cout<<display[i][j]<<" ";
        cout<<endl;
}
system("pause");
return 0;
}
