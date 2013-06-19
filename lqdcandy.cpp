#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main(){
    int test;
    cin>>test;
    while(test--)
    {
               long long n,m,m1;
               cin>>n;
               
               long double k=(long double)log2((long double)n);
               m=ceil(k);
               m=(long long)pow(2,(double)m);
               int i=0;
               int count=0;
                m1=m;
              if(n==m)
               { cout<<m<<" "<<count<<endl;
                 continue;
                 }
               while(n)
               {
                  n=n-m;
                  if(n<0)
                  n=n+m;
                  m=m/2;
                  count++;
                   
               }
                cout<<m1<<" "<<count-1<<endl;
    
   }
   return 0;
}
               
               

