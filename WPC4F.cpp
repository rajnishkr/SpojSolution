#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<20
#define LL long long
using namespace std;
int arr[50][50];

int main(){
int test;
scanf("%d",&test);
while(test--)
{
  
  int n,ma,x,maf=5000;
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++)
  {
        
          for(int j=0;j<3;j++)
           {
           scanf("%d",&x);
           ma=min(arr[i-1][(j+1)%3],arr[i-1][(j+2)%3]);
           arr[i][j]=ma+x;
           if(i==n)
           maf=min(maf,arr[i][j]);
           }
          //cout<<i<<n; 
 }
 
 printf("%d\n",maf) ;
 
}
return 0;
}
