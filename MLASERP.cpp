#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
int c=1000,n,m;
int posx[]={-1,0,1,0};
int posy[]={0,1,0,-1};
using namespace std;
vector< string > v;
struct node{
            int x;
            int y;
            int dir;
            int count;
            };
int bfs(int x,int y)
{

     node xy;
     xy.x=x;
     xy.y=y;
     xy.dir=-1;
     xy.count=0;
     queue<node> mq;
     mq.push(xy);
     v[x][y]='*';
     int  tempx,tempy;
     while(!(mq.empty()))
     {
                         xy=mq.front();
                         mq.pop();
                         cout<<xy.x<<xy.y<<endl;
                         for(int i=0;i<4;i++)
                         {
                                        tempx=xy.x+posx[i];
                                        tempy=xy.y+posy[i];
                                        if(tempx<0 || tempy<0 || tempx>n-1 || tempy>m-1)
                                        continue;
                                        if(v[tempx][tempy]=='*')
                                        continue;
                                        if(v[tempx][tempy]=='C')
                                        {
                                            if(xy.dir!=-1 && i!=xy.dir)
                                           {c=min(c, xy.count+1);
                                           }
                                           else
                                           if(xy.dir!=-1)
                                           c=min(c, xy.count);

                                        }
                                        v[tempx][tempy]='*';
                                         node tnode;
                                        if(xy.dir!=-1 && i!=xy.dir)
                                        {
                                            tnode.count=xy.count+1;
                                            tnode.dir=i;
                                        }
                                        else
                                        {
                                            tnode.count=xy.count;
                                            tnode.dir=i;

                                        }
                            cout<<tempx<<tempy<<tnode.count<<endl;
                                        tnode.x=tempx;
                                        tnode.y=tempy;
                                        mq.push(tnode);
                        }
                        cout<<endl;

     }
     return 0;
}

int main(){

v.clear();

           cin>>m>>n;
           string s;
           int count=-1;
           for(int i=0;i<n;i++)
           { cin>>s;
           v.push_back(s);
           }
          for(int i=0;i<n;i++)
           {
                   for(int j=0;j<m;j++)
                   {
                           if(v[i][j]=='C')
                           {          //  cout<<i<<j;
                                        bfs(i,j);
                                    count =1;
                                      break;

                           }
                   }
                   if(count!=-1)
                   break;


           }
           cout<<c<<endl;

    cin>>n;
    return 0;
}

