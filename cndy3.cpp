#include<iostream>
#include<vector>
#include<set>
#include<string.h>
#include<cstdio>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {            
                 long long sum=0,n,a;
                 cin>>n;
                 for(long long i=0;i<n;i++) 
                {          cin>>a;
                          sum+=a%n;
                }
                if(sum%n==0)
                cout<<"YES\n";
                else
                cout<<"NO\n";
                
    }
    return 0;
}
                 
                 
