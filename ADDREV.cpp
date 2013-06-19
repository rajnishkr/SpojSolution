#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long reverse(long long n)
{ long long sum=0,a=n,f;
  int count =0;
  while(a>=10)
  {
              a/=10;
              count++;
    }
    while(n>=10)
    { 
               f=n%10;
               sum=sum+pow(10,(float)count)*f;
               n/=10;
               count--;
    }
    sum=sum+n;
    return sum;
}

int main(){
    int test;
    cin>>test;
    while(test--)
    {
                 long long num1,num2,rnum1,rnum2,sum;
                 cin>>num1>>num2;
                 rnum1=reverse(num1);
                 rnum2=reverse(num2);
                 sum=reverse(rnum1+rnum2);
                 cout<<sum<<endl;
    }
    return 0;
}
                     
