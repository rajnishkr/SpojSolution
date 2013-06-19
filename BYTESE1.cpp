#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;
int disx[]={0,0,1};
int disy[]={-1,1,0};
int row,col;
vector<int> v[102];
void bfs(int x,int y);
int vis[105][105];
int d[105][105];
int main()
{
    int str;
    int cases,i,j,cnt;
    scanf("%d",&cases);
    while(cases--)
    {
        
         scanf("%d %d",&row,&col);
        for(i=0;i<row;i++)
        {  v[i].clear();
         for(j=0;j<col;j++)
         {
              cin>>str;
              v[i].push_back(str);
         }
        }
        
         int time,rw,cw;
         scanf("%d %d %d",&rw,&cw,&time);
         
         for(i=0;i<row;i++)
         {
         for(j=0;j<col;j++)
              {vis[i][j]=0;
              d[i][j]=0;
              }
         }
              
        // cnt=0;
                 d[0][0]=v[0][0];
                 //d[0][1]=v[0][0]+v[0][1];
                 bfs(0,0);
                /* cout<<endl;
            for(i=0;i<row;i++)
            {
            for(j=0;j<col;j++)
            cout<<d[i][j]<<" ";
            cout<<endl;
            }    */
            int tt=d[rw-1][cw-1];
            if(tt<=time)
            {cout<<"YES\n";
             cout<<time-tt<<endl;
             }
             else
             cout<<"NO\n";
             
    
    }
    return 0;
}

void bfs(int x,int y)
{
     pair<int,int> temp;
     int tempx,tempy,i;
     queue< pair<int,int> > q;
     
     q.push(make_pair(x,y));
     vis[x][y]=1;
     
     while(!q.empty())
     {
          temp=q.front();
          q.pop();
          x=temp.first;
          y=temp.second;
          vis[x][y]=1;
          for(i=0;i<3;i++)
          {
               tempx=x+disx[i];
               tempy=y+disy[i];
               
               if(tempx<0 || tempy<0 || tempx>=row || tempy>=col) continue;
             
               if(d[tempx][tempy]==0)
               d[tempx][tempy]=d[x][y]+v[tempx][tempy];
               else
               {
               if((d[x][y]+v[tempx][tempy])<d[tempx][tempy])
               d[tempx][tempy]=d[x][y]+v[tempx][tempy];
               }
               
               cout<<x<<" "<<y<<endl;
               cout<<tempx<<" "<<tempy<<endl;
               cout<<d[tempx][tempy]<<endl;
               system("pause");
                if(vis[tempx][tempy]) continue;
                q.push(make_pair(tempx,tempy));
          }
     }
     return;
}
