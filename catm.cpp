#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){

int n,m;
scanf("%d%d",&n,&m);
int test;
scanf("%d",&test);
int mouser,mousec,cat1c,cat1r,cat2r,cat2c,dis1,dis2,dis3;
while(test--)
{
scanf("%d%d%d%d%d%d",&mouser,&mousec,&cat1r,&cat1c,&cat2r,&cat2c);
bool flag=false;
for(int i=1;i<=n;i++)
{

    for(int j=1;j<=m;j++)
    {
        if(i==1 || j==1|| i==n || j==m)
        {
          dis1=abs((double)(i-mouser))+abs((double)(j-mousec));
          dis2=abs((double)(i-cat1r))+abs((double)(j-cat1c));
          dis3=abs((double)(i-cat2r))+abs((double)(j-cat2c));
          if(dis1<dis2 && dis1<dis3)
          {

              flag=true;
              break;
          }

        }

    }
    if(flag)
    break;
}
if(flag)
printf("YES\n");
else
printf("NO\n");


}
return 0;


}

