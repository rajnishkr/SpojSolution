#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main(){
    long long  k[36];
    for(int i=0;i<36;i++)
    k[i]=pow(2,(float)i);                                   
    long long g,t,a,d;
    cin>>g>>t>>a>>d;
    while(g!=-1)
    { 
    int i=0;
            long long x = 0,y, s;
            x += ((long long)g*t*(t-1))/2;
            s = g*a + d;
            while(k[i++]<s);
            i--;
            y=k[i]-s;
            x+=k[i]-1;

      printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,x,y);
         cin>>g>>t>>a>>d;
       }
       return 0;
       }
    
    
    
