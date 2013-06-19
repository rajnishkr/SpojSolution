#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--)
    {
      int r,c,r1=0,c1=0;
      cin>>r>>c;
      if(r%2==0)
      r1=1;
      if(c%2==0)
      c1=1;
      if(r==c && r1==1)
      cout<<"L\n";
      else
      {
          if(r>c)
          {
                 if(c1==1)
                  cout<<"U\n";
                  else
                  cout<<"D\n";
          }
          else
           {
                  if(r1==1)
                  cout<<"L\n";
                   else
                   cout<<"R\n";
           }
      }
      }
      return 0;
      }                  
      
      
      
