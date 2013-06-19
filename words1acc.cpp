#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define LL long long
using namespace std;
vector<char> list[26];
int in[26],out[26],vis[26];
int start,end;
bool check()
{
    bool flag=false,flag1=false;
    start=-1,end=-1;
    for(int i=0;i<26;i++)
    {        int k=in[i]-out[i];
            if(k!=0)
            {
               flag=true;
               if(k==1)
               end=i;
               else if(k==-1)
               start=i;
               else
               flag1=true;
            }
    }
    
    if(flag1)
    return false;
    if(flag && (start==-1 || end==-1))
    return false;
    if(!flag)
    {
    for(int i=0;i<26;i++)
    if(vis[i]==1)
    start=i;
    }
    return true;
}

bool path()
{
     if(!check())
     {          // cout<<"x";
                 return false;
     }
     
     bool vis2[26]={false};
     
     queue<int> q;
    // cout<<start<<endl;
     q.push(start);
     vis2[start]=true;
     
     while(!q.empty())
     {
         int v1=q.front(),v2;
         q.pop();
         int len=list[v1].size();
         
         for(int i=0;i<len;i++)
         {       v2=list[v1][i];
                 if(vis2[v2]==false)
                 q.push(v2),vis2[v2]=true;
         }
     }
     for(int i=0;i<26;i++)
     if(vis[i]==1 && vis2[i]==false)
     {            //cout<<i<<endl;
                  return false;
     }
     return true;
}
    
    
               
               
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
                 int n;
                 scanf("%d",&n);
                 for(int i=0;i<26;i++)
                 list[i].clear(),in[i]=0,out[i]=0,vis[i]=0;
                 char s[1010];
                 int first,last;
                 for(int i=0;i<n;i++)
                 {
                 scanf("%s",s);
                 first=s[0]-'a';
                 last=s[strlen(s)-1]-'a';
                 list[first].push_back(last);
                 vis[first]=1;
                 vis[last]=1;
                 out[first]++;
                 in[last]++;
                 }
                 if(path())
                 printf("Ordering is possible.\n");
                 else printf("The door cannot be opened.\n");
    }
return 0;
}
