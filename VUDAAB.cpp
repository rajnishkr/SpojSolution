#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {
                 int a,b,c,d;
                 cin>>a>>b>>c;
                 if(b==(a+c)/2)
                 cout<<c+(b-a)<<endl;
                 else
                 { d=c*((float)b/(float)a);
                 cout<<d<<endl;
                 }
 }
 return 0;
}                
                 
