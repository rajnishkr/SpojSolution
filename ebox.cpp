#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define pi 3.1415926535897932
#define LL long long
using namespace std;
int main(){
int test,n,m,a,b;
SS(test);
while(test--)
{
             SS(n);
             SS(m);
             SS(a);
             SS(b);
             if((a<n && b<m) || (a<m && b<n))
             printf("Escape is possible.\n");
             else
             {  /* int n1,m1,a1,a2;
                 n1=max(n,m);
                 m1=min(n1,m1);
                 a1=max(a,b);
                 a2=min(a,b);
                 double angle1,angle2,d,x;
                 angle1=atan((double)m1/n1);
                 d=sqrt(n*m);
                 d=(d-a1)/2;
                 x=a1/2;
                 angle2=atan((double)x/d);
                 
                 double x1,y1,h;
                 h=sqrt(d*d+x*x);
                 
                 x1=h*sin(angle1+angle2);
                 y1=h*cos(angle1+angle2);   */
                 double x1,y1;
                 x1=n*n+m*m;
                 y1=a*a+b*b;
                 if(x1<y1)
                 printf("Box cannot be dropped.\n");
                 else
                  printf("Escape is possible.\n");
                 } 
                 
                 
                 
                 
           //  printf("Box cannot be dropped.\n");

}
system("pause");
return 0;
}
