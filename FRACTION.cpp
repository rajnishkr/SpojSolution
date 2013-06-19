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
int num[10000000];
int den[10000000];
int in[100000];
int main(){
    int test;
    SS(test);
    num[0]=0;
    den[0]=1;
    num[1]=1;
    while(test--)
    {
     int n,m,i,j=0,ma=0,A,B,C,D,E,F,x;
     SS(n);
     SS(m);
     for(i=0;i<m;i++){
     SS(in[i]);ma=max(ma,in[i]);}
     
     i=2;
      A=0,B=1,C=1,den[1]=D=n;
     while(i<=ma)
     {
                     x = (n+B)/D;
                     E = x * C - A;
                     F = x * D - B;
                     
                     A=C;
                     B=D;
                     C=E;
                     D=F;
                     
                     num[i]=E;
                     den[i]=F;
                     i++;
             
     }
     for(i=0;i<m;i++)
     printf("%d/%d\n",num[in[i]-1],den[in[i]-1]);

}
//system("pause");
return 0;
}
