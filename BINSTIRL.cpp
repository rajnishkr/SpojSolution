#include<iostream>
#include<cstdio>

using namespace std;

int sum=0;
int function (int n, int m)

{    cout<<n<<" "<<m;
  if(n<m)
  return 0;
    if(n==0 && m==0)
    return 1;
    else 
    {
     if(n==0 || m==0)
     return 0;
     else
    {       
   if(m%2!=0)
   return   m*function(n-1, m)+ function(n-1,m-1) ;
             else
               return function(n-1,m-1) ;
               }
         
    }
 //  return sum;
}

int main(){
    int test;
    cin>>test;
    while(test--)
    {
                 int m,n;
                 cin>>n>>m ;
                 int sum=function(n,m);
                 cout<<sum%2<<endl;
    }
    return 0;
}

                 
