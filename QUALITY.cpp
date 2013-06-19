#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int a,b,c,dela,delb,delc,l=1;
while(scanf("%d%d%d%d%d%d",&a,&b,&c,&dela,&delb,&delc))
{  int del=1200;
   int sum=0,pro=0;
   if(a!=0)
   {
           pro++;
           sum=a+(dela-1)*del;
   }
   if(b!=0)
   {
           pro++;
           sum+=b+(delb-1)*del;
   }
   if(c!=0)
   {
           pro++;
           sum+=c+(delc-1)*del;
   }
   printf("team %d: %d, %d",l++,pro,sum);
}

return 0;
}
