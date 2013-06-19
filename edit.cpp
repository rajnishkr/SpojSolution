#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    string s;
while(getline(cin,s))
{
  int even_small=0,even_big=0,odd_small=0,odd_big=0;
  for(int i=0;i<s.length();i++)
  {
          if(i%2==0)
          {
                    if(s[i]>='a' && s[i] <='z')
                    even_small++;
                    else
                    even_big++;
          }
          else
          {         if(s[i]>='a' && s[i] <='z')
                    odd_small++;
                    else
                    odd_big++;
              
          }
  }
  int m=min(odd_small+even_big,odd_big+even_small);
  cout<<m<<endl;
}

return 0;
}
