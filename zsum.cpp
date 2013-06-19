#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
long long power( long long n, long long p )
{
   if (p==0)
   return 1;
   if(p==1)
   return n;
   if (p%2!=0)
   return n*(power( (n*n)%10000007, (p-1)/2)%10000007);
   else
   return power((n*n)%10000007, p/2)%10000007;
}
int main(){
    long long n,k;
    cin>>n>>k;
    
    while(n!=0){
    long long sum1= (power(n,n)%10000007+power(n,k)%10000007+2*power((n-1),k)%10000007+2*power((n-1),n-1)%10000007)%10000007;
   // long long sum1=power(n,k);
    cout<<sum1<<endl;
    cin>>n>>k;
   }
   return 0;
}
