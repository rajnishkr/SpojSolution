#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {            long long x=1000007,n;
                 cin>>n;
                 long long sum= ( ( n * (n+1) ) %x  +  ((n* (n-1))/2)%x )%x;
                 cout<<sum<<endl;
    }
    return 0;
}

