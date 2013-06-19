#include<iostream>
#include<map>
using namespace std;
 long long sum=0;
 map<long long ,long long > m;
 long long pro( long long n)
{   
    if(n>=(n/2+n/3+n/4))
     return n;
     else
     if(m.count(n))
      return m[n];
      else
      { 
     sum= pro(n/2)+ pro(n/3)+ pro(n/4);
     m[n]=sum;
     }
     return sum;

    
     }
     int main(){
         long long n;
         while(cin>>n)
         {
                    long long sum1=pro(n);
                    cout<<sum1<<endl;
         }
         return 0;
     }
         
         
