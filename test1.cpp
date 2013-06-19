#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;                                                                                        
int main(){
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<s.size();i++)
            a[s[i]-97]++;
    for(int i=0;i<26;i++)
    {
                     if(a[i]!=0)
                     {
                     char b=(char)(97+i);
                     cout<<b<<" "<<a[i]<<endl;
                     }
    }
   
    return 0;
}                
                  
