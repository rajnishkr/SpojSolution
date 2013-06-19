using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>

# define PI 3.14159265

struct t_st {
       int x;
       int y;
       int val;
};

struct compare 
{
  bool operator()(const t_st& l, const t_st& r) 
  {
      return l.val > r.val;
  }
};



int arr[111][111];

int vis[111][111];
int r,c,res,a,b;

void fn() {
     int i,j;
     t_st v,u;
     priority_queue<t_st,vector<t_st>, compare > pq;
     
     v.x=0; v.y=0; v.val=arr[0][0];
     pq.push(v);
     
     while(!pq.empty()) {
            v=pq.top();
            //cout<<v.x<<"  "<<v.y<<"  "<<v.val<<endl;
            if(v.x==a && v.y==b) { res=v.val; break; }
            pq.pop();
            
            if(v.x>0) {
                 u.x=v.x-1;
                 u.y=v.y;
                 u.val=v.val+arr[v.x-1][v.y];
                 if(vis[u.x][u.y]==0) pq.push(u);
            }
            if(v.y>0) {
                 u.x=v.x;
                 u.y=v.y-1;
                 u.val=v.val+arr[v.x][v.y-1];
                 if(vis[u.x][u.y]==0) pq.push(u);
            }
            if(v.x<r-1) {
                 u.x=v.x+1;
                 u.y=v.y;
                 u.val=v.val+arr[v.x+1][v.y];
                 if(vis[u.x][u.y]==0) pq.push(u);
            }
            if(v.y<c-1) {
                 u.x=v.x;
                 u.y=v.y+1;
                 u.val=v.val+arr[v.x][v.y+1];
                 if(vis[u.x][u.y]==0) pq.push(u);
            }
            vis[v.x][v.y]=1;
     }
}
      
      
      
int main() {
    int i,j,t,tym;
    scanf("%d",&t);
    while(t--) {
         scanf("%d %d",&r,&c);
         for(i=0;i<r;i++) {
               for(j=0;j<c;j++) {
                     scanf("%d",&arr[i][j]);
                     vis[i][j]=0;
               }
         }
         
         scanf("%d %d %d",&a,&b,&tym);
         a--; b--;
         
         fn();
         
         if(res<=tym) {
               printf("YES\n");
               printf("%d\n",tym-res);
         }       
         else printf("NO\n");
    }
    return 0;
}
                                    
