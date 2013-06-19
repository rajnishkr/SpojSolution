#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

int main(){
       int a,b;
    cin>>a>>b;
    while(a!=-1 && b!=-1)
    {
              
                 if(a ==1 || b==1)
                 cout<<a<<"+"<<b<<"="<<a+b<<endl;
                 else
                 cout<<a<<"+"<<b<<"!="<<a+b<<endl;
                 cin>>a>>b;
    }
    return 0;
}
