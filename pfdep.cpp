#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
int main(){
    int n,m,j,k,l,a;
    scanf("%d%d",&n,&m);
    bool vis[105]={false};
    bool arr[105][105];
    memset(arr,0,sizeof(arr));
    priority_queue<int> pq;
    for(int i=1;i<=m;i++)
    {
            scanf("%d %d",&j,&k);
            vis[j]=true;
            for(int l=0;l<k;l++)
            {
                    scanf("%d",&a);
                    arr[j][a]=1;
            }
    }
    for(int i=1;i<=n;i++)
    {
            if(vis[i]==false)
            pq.push(-i);
    }
    vector<int> vec;
    while(!pq.empty())
    {
       k=pq.top();
       pq.pop();
       vec.push_back(-k);
       k=-k;
       for(int i=1;i<=n;i++)
       {
               if(arr[i][k]==1)
               {
                 arr[i][k]=0;
                 int count=0;
                 for(int j=1;j<=n;j++)
                 if(arr[i][j]==1)
                 {count++;
                 break;}
                 if(!count)       
                 pq.push(-i);
               }
    }
  
}
  cout<<vec[0];
    for(int i=1;i<vec.size();i++)
    cout<<" "<<vec[i];
    cout<<endl;

cin>>n;
return 0;
}
