#include<iostream>
#include<cstdio>
#include<cmath>
#define pi 3.1415926535897932384626
using namespace std;
int main(){
   int test;
   scanf("%d ",&test) ;
  while(test-- )
    {
                 
                 long long n,num;
                 scanf("%lld",&n);
                 if(n!=1 && n!=0)
                 num= floor((log(2*pi*n)/2+n*(log(n)-1))/log(10))+1 ;
                 else
                 num=1;
                 printf("%lld\n",num);
    }
    return 0;
}
