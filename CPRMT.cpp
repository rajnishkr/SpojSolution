#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
int main(){
    
    string a,b;
    while(cin>>a)
    {           map<char,int> ma;
                map<char,int> mb;
                ma.clear();
                mb.clear();
                 cin>>b;              
                 for(int i=a.size()-1;i>=0;i--)
                 {
                         if(b.find(a[i])!=-1)
                         {if(ma.count(a[i]))
                            ma[a[i]]++;
                            else
                            ma[a[i]]=1;
                          
                         }
                         
                 }
                 
                  for(int i=b.size()-1;i>=0;i--)
                 {
                         if(a.find(b[i])!=-1)
                         {if(mb.count(b[i]))
                            mb[b[i]]++;
                            else
                            mb[b[i]]=1;
                         }
                         
                 }
                 map<char,int>:: iterator it;
                 int i=0;
                 for(int i=0;i<26;i++)
                 {       char c=i+'a';
                        if(ma.count(c))
                        {
                        int j=min(ma[c],mb[c]);
                        while(j--)
                        cout<<c;
                        }
                 }
                 
                 cout<<endl;
     }
     return 0;
     }
                        
