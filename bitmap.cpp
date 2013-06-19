#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
int r,c;
int r1[]={-1,0,1,0};
int c1[]={0,-1,0,1};
vector <string>input;
int sol[300][300];
struct node{
int x;
int y;
};
void bfs()
{
    node temp;
    queue<node> q;
    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    {   if(input[i][j]=='1')
     {
        temp.x=i;
        temp.y=j;
        q.push(temp);
        sol[i][j]=0;
     }
     else
     sol[i][j]=3000;
    }
    }
    int x,y;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        x=temp.x;
        y=temp.y;
        int tempx,tempy;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                tempx=x+r1[i];
                tempy=y+c1[i];
                if(tempx<0 || tempy<0 || tempx>r-1 || tempy>c-1)
                continue;
                if(sol[tempx][tempy]>sol[x][y]+1)
                {
                    temp.x=tempx;
                    temp.y=tempy;
                    sol[tempx][tempy]=sol[x][y]+1;
                    q.push(temp);
                }
            }
        }
}
    return ;
}
int main(){
int test;
scanf("%d",&test);
while(test--)
{
    scanf("%d%d",&r,&c);
    string s;
    input.clear();
    for(int i=0;i<r;i++)
    { cin>>s;
    input.push_back(s);
    }
    bfs();
    for(int i=0;i<r;i++)
    {
            cout<<sol[i][0];
            for(int j=1;j<c;j++)
            cout<<" "<<sol[i][j];
            cout<<endl;
    }

}
return 0;
}
