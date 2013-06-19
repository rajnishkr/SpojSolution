#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
string str="NSWE";
int n,m;
int posx[]={-1,1,0,0};
int posy[]={0,0,-1,1};
bool vis[1001][1001];

vector< string > v;
struct node{
            int x;
            int y;
            };
void bfs(int x,int y)
{
     
     node xy;
     xy.x=x;
     xy.y=y;
     queue<node> mq;
     mq.push(xy);
     int  tempx,tempy;
     string p=" ";
     while(!(mq.empty()))
     {
                         xy=mq.front();
                         vis[xy.x][xy.y]=true;
                         mq.pop();
                         p=v[xy.x][xy.y];
                         node temp1;
                         int pos=str.find(p);
                         for(int i=0;i<4;i++)
                         {
                                        tempx=xy.x+posx[i];
                                        tempy=xy.y+posy[i];
                                        if(tempx<0 || tempy<0 || tempx>n-1 || tempy>m-1) {
                                        continue;        
                                         }
                                        if(vis[tempx][tempy]==true)
                                        continue;
                                        
                                        if(i==pos)
                                        {   temp1.x=tempx;
                                            temp1.y=tempy;
                                             vis[tempx][tempy]=true;
                                            mq.push(temp1);
                                            continue;
                                        }
                                         p=v[tempx][tempy];
                                         pos=str.find(p);
                                         int tempx1,tempy1;
                                         tempx1=tempx+posx[pos];
                                         tempy1=tempy+posy[pos];
                                        if(tempx1<0 || tempy1<0 || tempx1>n-1 || tempy1>m-1)
                                        continue;
                                        if(tempx1==xy.x && tempy1==xy.y)
                                          {
                                                       temp1.x=tempx;
                                                       temp1.y=tempy;
                                                       vis[tempx][tempy]=true;
                                                       mq.push(temp1);
                                                       continue;
                                          }
                         }
     }                   
                         
     return ;                    
     }
    

                                                   
            


int main(){
    
           int k=0;
           cin>>n>>m;
           string s;
           for(int i=0;i<n;i++)
           { cin>>s;
           v.push_back(s);
           for(int j=0;j<m;j++)
           vis[i][j]=false;
           }
           bool flag=true;
           while(flag)
           {
           flag=false;
          for(int i=0;i<n;i++)
           {
                for(int j=0;j<m;j++)
                   {
                         if(vis[i][j]==false)
                           {           k++;
                                        bfs(i,j);
                                        flag=1;
                                         
                           } 
                   }
                          
                          
           } 
           }
           cout<<k;
    return 0;
}
                                
