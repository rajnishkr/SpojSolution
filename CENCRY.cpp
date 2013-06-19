#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
int test;
cin>>test;
string vol="aeiou";
string cons="bcdfghjklmnpqrstvwxyz";
    while(test--)
    {
          int arr[26]={0}; 
          string s;
          cin>>s;
          for(int i=0;i<s.length();i++)
          {
                  int k,f;
                  f=vol.find(s[i]);
                  if(f!=-1)
                  {   
                      int pos=s[i]-'a';
                      int k=arr[pos];
                      arr[pos]++;
                      k=k*5+f;
                      k=k%21;
                      cout<<cons[k];
                  }
                  else
                  {
                       f=cons.find(s[i]); 
                       int pos=s[i]-'a';
                       int k=arr[pos];
                       arr[pos]++;
                       k=k*21+f;
                       k=k%5;
                       cout<<vol[k];
                  }
          }
cout<<endl;
}
return 0;
}
                  
