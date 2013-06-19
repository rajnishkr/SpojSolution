#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    
    double x,n;
   
    int test;
    scanf("%d",&test);
    while(test--)
    {
     scanf("%lf",&x);
     n=pow((8*x+1),0.5)/2;
     int r = (int)ceil(n);
     int p=x-(r*(r+1)/2);   
     int a = r - p + 1 ;  
     if (r % 2 == 0)   
        printf( "TERM %d IS %d/%d\n",(int)x, p, a);   
     else   
        printf("TERM %d IS %d/%d\n",(int)x, a, p) ;
     }
     return 0;
     
     }
