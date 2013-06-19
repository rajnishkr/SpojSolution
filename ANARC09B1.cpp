#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
int gcd( int ,int);
using namespace std;
int main(){
    int m,n,p;
    cin>>m>>n;
    while(m)
    {
      if(m>n)
       {p=m;
       m=n;
       n=p;}
       if(n%m==0)
             cout<<(n/m)<<endl;
       else
           { 
                             int gc=gcd(m,n);
                             int lcm=(m*n)/gc;
                           // long long int c1,c2;
                             
                              cout<<lcm<<endl;
                             }
        cin>>m>>n;  
             }
          return 0;
    
  }
int gcd(int m,int n)
  {
      if(m==0)
      return n;
      return gcd(n%m,m);
  
  }
                      
   
       
     
