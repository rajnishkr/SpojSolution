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
int n,m;
struct node{
       int x,y,i,j;
       };
int arr[10000][10000];
vector<string> v;
int bfs(int i,int j)
{
    queue<node> q;
    node temp;
    int si=-1,sj;
    arr[i][j]=1;
    temp.x=i;
    temp.y=j;
    temp.i=i;
    temp.j=j;
    q.push(temp);
    while(!q.empty())
    {
    
    node temp;
    temp=q.front();
    q.pop();
    v[temp.i][temp.j]='X';
    cout<<temp.i<<" "<<temp.j<<" "<<temp.x<<" "<<temp.y<<" "<<arr[temp.i][temp.j]<<endl;
    
    for(i=temp.i-1;i<=temp.i+1;i++)
    {
      for(j=temp.j-1;j<=temp.j+1;j++)
      { node newnode;
        if(i<0 || j<0 || i>=n || j>=m || v[i][j]=='X')
        continue;
        
        
        if(temp.x==i || temp.y==j || (temp.x==i-1 && temp.y==j-1))
        {
         if(arr[i][j]>=arr[temp.i][temp.j])
         {
           arr[i][j]=arr[temp.i][temp.j];
              newnode.x=temp.x;
              newnode.y=temp.y;
         }
       }
       else
       {
         if(arr[i][j]>=arr[temp.i][temp.j]+1)
         {
           arr[i][j]=arr[temp.i][temp.j]+1;
              newnode.x=temp.i;
              newnode.y=temp.j;
         }
       }
        if(v[i][j]=='F')
        {
        si=i;
        sj=j;
        }
        
        newnode.i=i;
        newnode.j=j;
        q.push(newnode);
       }
}
}
if(si==-1)
return -1;
else
return arr[si][sj];
  
}
        
          
              
                 
    
    
     
           
int main(){
int test,si,sj;
string s;
SS(test);
while(test--)
{
        v.clear();
        
        SS(n);
        SS(m);
        for(int i=0;i<n;i++)
        {
        cin>>s;
        if(s.find("S")!=-1)
                {
                si=i;
                sj=s.find("S");
                }
        v.pb(s);
        for(int j=0;j<m;j++)
        {
                arr[i][j]=inf;
                
        }
        }
        //cout<<si<<sj<<endl;
        printf("%d\n",bfs(si,sj));
        
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;          }
        
}       
system("pause");
return 0;
}
