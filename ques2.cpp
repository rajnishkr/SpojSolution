#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s,odd="",even="";
    int test,o=1,e=0;
     cin>>test;
     while(test--)
     {
                  cin>>s;
                  for(int i=0;i<s.size();i++)
                  {        string p=""+s[i];
                          if(i%2==0)
                          {
                           
                           even.append(p);
                          e=e+2;
                          }
                          else
                         { odd.append(p);
                          o=o+2;
                          }
                  }
                  string k=odd.append(even);
                  cout<<k<<endl;
                  }
                  return 0;
                  }
