#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

 int test;
 cin>>test;
 while(test--)
 {            int n;
              cin>>n;
              int c=0;
              while(n>0)
              {
                           c=c+(n/5);
                           n=n/5;
              }
              cout<<c<<endl;
 }            

return 0;
}
