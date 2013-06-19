#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
    
    int test;
    cin>>test;
    while(test--)
    {
                 string s;
                 cin>>s;
                 int flag=0;
                 for(int i=0;i<s.length();i++)
                 {
                          if(s[i]=='D')
                          {
                                       flag=1;
                                       break;
                          }
                 }
                 if(flag==1)
                 cout<<"You shall not pass!\n";
                 else
                 cout<<"Possible\n";
    }
    return 0;
}
