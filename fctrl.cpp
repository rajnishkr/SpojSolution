#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int main() {
    int test,n;
    cin>>test;
    while(test--)
    {
                 cin>>n;
                 int m=5,c=0;;
                 while(m<=n)
                 {
                   
                    c+=n/m;
                   m=m*5;
                 }
                 cout<<c<<endl;
    }
    return 0;
}
                   
