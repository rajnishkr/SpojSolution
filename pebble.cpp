#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    
    string s;
    int j=1;
    while(cin>>s)
    {
                 bool b=0;
                 int c=0;
                 for(int i=0;i<s.size();i++)
                 {
                         
                         if(s[i]=='0')
                         {           if(b)
                                     c=c+1;
                                     b=0;
                                      while(s[i+1]=='0' && i<s.size()){i++;}  ;
                         }
                         if(s[i]=='1')
                         {        b=1;
                                  c++;
                                 while(s[i+1]=='1' && i<s.size()){i++;}  ; 
                         }
                 }
                printf("Game #%d: %d\n",j++,c);
                }
                return 0;
                }      
