#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long  int reverse(long long int n)
{ long long int sum=0,a=n,f;
float count =0;
  while(a>=10)
  {
              a/=10;
              count++;
              }
    while(n>=10)
    { 
               f=n%10;
               sum=sum+pow(10,count)*f;
               n/=10;
               count--;
    }
    sum=sum+n;
    return sum;
}             
               
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
               long long  int n,count=1;
                 scanf("%lld",&n);
                 int a=n;
                  
               while(a>=10)
                 {
                   a/=10;
                   count++;
                 }
                 a=n;
                  long long int sum;
                 if(count%2!=0)
                 {  float c=count/2+1;
                  long long int right=a%(long long int)pow(10,c-1);
                   a=(a-right)/(long long int)pow(10,c-1);
                  long long int  mid=a%10;
                  long long int left=(a-mid)/10; 
                  
                  long long int lr=reverse(left);
                  sum=(long long int)left*pow(10,c)+(mid)*(long long int)pow(10,c-1)+lr;
                  if(sum<=n)
                    {
                      if(mid!=9)
                         sum=left*pow(10,c)+(mid+1)*pow(10,c-1)+lr;
                      else
                         sum=(left+1)*pow(10,c)+reverse(left+1);   
                    }
                  }
                  else
                  {   a=n;
                      float c=count/2;
                     long long int right=a%(long long int)pow(10,c);
                     long long int left=(a-right)/pow(10,c);
                     long long int lr=reverse(left);
                      sum=left*pow(10,c)+lr;
                      if(sum<=n)
                         sum=(left+1)*pow(10,c)+reverse(left+1);
                        
                        }   
                                
                   cout<<sum<<endl;
                  
                   
                   }
                   return 0;
                   }
