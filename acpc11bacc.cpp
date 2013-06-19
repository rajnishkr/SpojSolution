#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL long long
#define inf 1<<30
using namespace std;
int main(){
    
 int test;
scanf("%d",&test);
while(test--)
{
  LL arr[2][1005];
  int m,n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  scanf("%lld",&arr[0][i]);
  scanf("%d",&m);
  for(int i=0;i<m;i++)
  scanf("%lld",&arr[1][i]);
  long long min=inf,d;
  for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
          {        d=arr[0][i]-arr[1][j];
                  if(d<0)
                  {if(-d<min)
                  min=-d;
                  }
                  else
                  if(d<min)
                  min=d;
                  }
  printf("%lld\n",min);
  }
  return 0;
}
