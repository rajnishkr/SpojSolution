#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
struct node{
       int dist;
       int fuel;
};
bool operator<(const node a1,const node a2 )
{
     return a1.fuel<a2.fuel;
}
node arr[10001];
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int n;
              scanf("%d",&n);
              for(int i=n;i>=1;i--)
              scanf("%d%d",&arr[i].dist,&arr[i].fuel);
              int l,p;
              scanf("%d%d",&l,&p);
              priority_queue<node> q;
              int c=0;
              node temp;
              temp.fuel=0;
              temp.dist=0;
              int flag=false;
                arr[n+1]=temp;
              for(int i=1;i<=n+1;i++)
              {       
                       if(p>=l)
                       break;
                      while(p-(l-arr[i].dist-1)<=0)
                      {
                       if(q.empty())
                           {
                                     flag=true;
                                     break;
                           }
                       else
                       {
                           node temp=q.top();
                           q.pop();
                          // cout<<temp.fuel<<endl;
                           p=p+temp.fuel;
                           c++;
                       }
                     }
                     if(flag)
                     break;
                        q.push(arr[i]);
                         if((p-(l-arr[i].dist))==0)
                         {  
                           node temp=q.top();
                           q.pop();
                           //cout<<temp.fuel<<endl;
                           p=p+temp.fuel;
                           c++;
                       
                         }
                         //cout<<p<<endl;     
              }
              if(flag)
              c=-1;
              cout<<c<<endl;
}
return 0;
}
