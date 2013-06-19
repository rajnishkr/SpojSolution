#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
bool s[10001][10001];
int main(){
    int test,l=1;
    scanf("%d",&test);
    int n,c;
    while(test--)
    {
                 scanf("%d%d",&n,&c);
                 for(int i=0;i<=n;i++)
                  for(int j=0;j<10001;j++)
                  s[i][j]=false;
                 int id,sub,flag=0;
                 for(int i=0;i<c;i++)
                 {
                         scanf("%d%d",&id,&sub);
                         if(s[id-1][sub%10000])
                         flag=1;
                         else
                         s[id-1][sub%10000]=1;
    
                }
    printf("Scenario #%d: ",l++);
    if(flag)
    printf("impossible\n");
    else
    printf("possible\n");
    }



return 0;
}
