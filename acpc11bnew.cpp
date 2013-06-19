#include<iostream>
#include<cstdio>
#include<algorithm>
#define inf 1<<30
#include<vector>
#define LL long long
using namespace std;
LL compare (const void * a, const void * b)
{
  return ( *(LL*)a - *(LL*)b );
}

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
  sort(arr[0],arr[0]+n);//,sizeof(long long),compare);   
  sort(arr[1],arr[1]+m);//,sizeof(long long),compare); 
  LL d=0,mi=inf,prevd=inf;
  for(int i=0;i<n;i++)
  {for(int j=0;j<m;j++)
      {    d=arr[0][i]-arr[1][j];
          if(d>=0)
          { 
          mi=min(mi,d);
          if(d>prevd)
          break;
          else
          prevd=d;
          }
          else
              mi=min(mi,-d);
          
      }
      if(mi==0)
      break;
  }
  printf("%lld\n",mi);
}
return 0;
}
