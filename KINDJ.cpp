#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>

using namespace std;
int main(){
    
    string s;
    while(getline(cin,s)){
     int flag=0,count=0;
     for(int i=0;i<s.length();i++)
     {
             if(!(isalpha(s[i]))  && flag==1)
             {count++;
              flag=0;
              }
             if(isalpha(s[i]))
             flag=1;  
     }
     if(isalpha(s[s.length()-1]))
     count++;
     cout<<count<<endl;
     }
     return 0;
}     
                          
