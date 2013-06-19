#include<iostream>
#include<cmath>
using namespace std; 
long long pw2(long long n)
{   float i=0;
    while(n>pow(2,i++));
    return (long long )pow(2,i-1);
}
int main(){                                   
    long long g,t,a,d;
    cin>>g>>t>>a>>d;
    while(g!=-1)
    { 
    long long sum1=0,n=t,f=1,a1=a;
     f=n*(n-1)/2;
     sum1=g*f;
     
     if(sum1==1)
     sum1=0;
     n=g*a+d;
     cout<<n<<" \n";
     long long n1=pw2(n);
    cout<<n1<<" \n";
     long long y=n1-n;
     sum1+=n1-1;
      printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,sum1,y);
         cin>>g>>t>>a>>d;
       }
       return 0;
       }
    
    
    
