#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
    int k=0,i,p,mem;
    string s,w;
     while(cin>>p)
     {
       getchar();
       getline(cin,w);
       getline(cin,s);
       vector<int> v;
       int no=0;
       if(s.size()>=w.size())
       {
       for(int i=0;i<s.size();i++)
       {    if(w[0]==s[i])
             v.push_back(i);
             
             
       }
       
       for(int i=0;i<v.size();i++)
       {        int i1=v[i],c=0;
             if((i1+w.size())<=s.size())
             {
             for(int j=0;j<w.size();j++)
             {
                     if(s[i1++]!=w[j])
                     {   c=1;
                     break;
                     }
             }
             
             if(!c)
             {
                   no=1;
                   cout<<v[i]<<endl;
             }
             }
       }
       if(!no)
       cout<<endl;
       cout<<endl;
       }
       else
       cout<<"\n\n";
     } 
     return 0;
     
     }   
                   
                    
                             
