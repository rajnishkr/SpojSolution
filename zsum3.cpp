#include<string.h>                  
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
inline long  long power(long long n,long long k)
 {     long long sum=1;
       for(int i=0;i<k;i=i+1)
       {       
                sum=(sum%10000007)*n;
               
       }
       sum*=2;
       sum=sum%10000007;
       return sum ;
}   
inline long  long power2(long long n,long long k)
 {     long long sum=1;
       for(int i=0;i<k;i+=1)
       {       
               sum=(sum%10000007)*n;
              // sum=(sum%10000007)*n;
       }
 
        sum=sum%10000007;
       return sum ;
}       
int main(){
    long long n,k;
    scanf("%lld%lld",&n,&k);
    while(n!=0 && k!=0)
    {             // cout<<n<<k<<endl;
               long long sum1,sum2,sum3,sum4,sum5,sum6,sum7;
               if((n-1)>k)
               {
                sum1= power(n-1,k);
                sum2= power2(n-1,n-k-1);
               }
               else
               {
                   sum1= power(n-1,n-1);
                sum2= power2(n-1,k-n+1);
                }
                sum3=(sum1*(sum2+1))%10000007;
                if(n>k)
                {  sum4= power2(n,k);
                   sum5= power2(n,n-k);
                }
                else
                {    sum4= power2(n,n);
                   sum5= power2(n,k-n);
                }
                sum6=(sum4*(sum5+1))%10000007;
               sum7=(sum3+sum6)%10000007;
              // printf("%lld\n %lld \n %lld \n%lld\n %lld \n ",sum1,sum2,sum3,sum4,sum5);
               cout<<sum7<<endl;
               scanf("%lld%lld",&n,&k);
     }
               return 0;
}                
    
      
