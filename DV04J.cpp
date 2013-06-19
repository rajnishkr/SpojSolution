#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    
    int test;
    cin>>test;
    while(test--)
    {
                 int n,count=0;
                 cin>>n;
                 while(n!=1){      
                               count++;
                               n=n/2;
                               
                               }
                 count=count+2;
                 if(count<3)
                 count=3;
                 cout<<count<<endl;
    }
    return 0;
}
