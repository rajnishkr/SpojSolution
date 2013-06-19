#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define LL long long
#define N 100005
#define pb push_back
using namespace std;

class Arti
{
      int n;
      vector<int> v[N];

      public:
             int m;
             bool visited[N+1];
             void query1(int,int,int,int);
             void query2(int,int,int);
             void reset();
             void input();


};
bool gloflag;
void Arti::reset()
{
     gloflag=false;
     for(int i=1;i<=n;i++)
      visited[i]=false;
 }
void Arti::query2(int a,int b,int c)
{
     if(gloflag==true) return;
     if(a==b){gloflag=true; return;}

     visited[a]=true;
     int len=v[a].size();
     for(int i=0;i<len;i++)
     {
         if(!visited[v[a][i]])
           query2(v[a][i],b,c);
     }


}
void Arti::query1(int a,int b,int g1,int g2)
{
     //cout<<a<<endl;
     if(gloflag==true) return;
     if(a==b){gloflag=true; return;}

     visited[a]=true;
     int len=v[a].size();
     for(int i=0;i<len;i++)
     {
         if(!visited[v[a][i]] && !(a==g1 && v[a][i]==g2) && !(a==g2 && v[a][i]==g1))
           query1(v[a][i],b,g1,g2);
     }


}
void Arti::input()
{
     SS(n);
     SS(m);
     int x,y;
     for(int i=0;i<m;i++)
     {
        SS(x);SS(y);
        v[x].pb(y);
        v[y].pb(x);
     }
 }
int main(){
      int a,b,g1,q,g2,c,com;
      Arti arti;
      arti.input();
      SS(q);
      while(q--)
      {
             arti.reset();
             SS(com);
             //cout<<com<<"c"<<endl;
             if(com==1)
             {
                       SS(a);SS(b);SS(g1);SS(g2);
                       arti.query1(a,b,g1,g2);

             }
                  else
                  {
                      SS(a);SS(b);SS(c);
                      arti.visited[c]=true;
                       arti.query2(a,b,c);
                  }

             if(gloflag)
                printf("da\n");
             else
               printf("ne\n");
      }


system("pause");
return 0;
}
