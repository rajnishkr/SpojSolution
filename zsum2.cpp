#include<string.h>
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
long  long power(long long n,long long k)
 {     long long sum=1;
       for(int i=0;i<k;i++)
       {       
                sum=(sum%10000007)*n;
               
       }
       sum*=2;
       sum=sum%10000007;
       return sum ;
} 
long  long power2(long long n,long long k)
 {     long long sum=1;
       for(int i=0;i<k;i++)
       {       
                sum=(sum%10000007)*n;
               
       }
 
        sum=sum%10000007;
       return sum ;
}       
int main(){
    long long n,k;
    scanf("%lld%lld",&n,&k);
    while(n!=0 && k!=0)
    {             // cout<<n<<k<<endl;
               long long sum1= power(n-1,k);
               long long sum2= power2(n,k);
               long long sum3= power(n-1,n-1);
              long long sum4= power2(n,n);
               long long sum5=(sum1+sum2+sum3+sum4)%10000007;
              // printf("%lld\n %lld \n %lld \n%lld\n %lld \n ",sum1,sum2,sum3,sum4,sum5);
               cout<<sum5<<endl;
               scanf("%lld%lld",&n,&k);
     }
               return 0;
}                
    
      
