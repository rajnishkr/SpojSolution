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
using namespace std;
char pattern[305][307];
char text[2002][2002];
struct node{
       int x,y;
       };
bool compare(const node n1,const node n2)
{
return (n1.x<n2.x || (n1.x==n2.x && n1.y<n2.y)); 
}
int main(){
    int m1,m2;
    SS(m1);
    SS(m2);
    for(int i=0;i<m1;i++)
    scanf("%s",pattern[i]);
    int n,m;
    SS(n);
    SS(m);
    for(int i=0;i<n;i++)
    scanf("%s",text[i]);
     vector<node> v;
    for(int i=0;i<=n-m1;i++)
    {
            for(int j=0;j<=m-m2;j++)
            {       bool flag2=1;
                    int l,i1,j1,p;
                    
                    for(l=0,i1=i;l<m1;l++,i1++)
                    for(p=0,j1=j;p<m2;p++,j1++)
                    if(text[i1][j1]!=pattern[l][p])
                    {flag2=0;
                    break;
                    }
                    
                    
                    if(flag2)
                    {node temp;
                     temp.x=i+1;
                     temp.y=j+1;
                     v.pb(temp);
                    } 
            }
            
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++)
    printf("(%d,%d)\n",v[i].x,v[i].y);
    if(v.size()==0)
    printf("NO MATCH FOUND...\n");
system("pause");
return 0;
}
