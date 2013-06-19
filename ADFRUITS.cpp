#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
string sp;

void fun(string s1,string s2)
{     sp=s1;
     int j=0,max=0;
     for(int i=0;i<s2.length();i++)
       {        string s=" ";
               s[0]=s2[i];
               if((j=s1.substr(max).find(s))==-1)
               {
                 sp=sp.append(s2.substr(i));
               
                 break;
               }
               else
               {   
                  max=j+max+1;
                  if(max>s1.length()-1)
                 {sp=sp.append(s2.substr(i+1));
                 
                 break;
                 }
                 
               }
            // cout<<j<<" "<<max<<endl;
              //  cout<<sp<<" "<<endl;
              
       }
}
int main(){
    string s1,s2;
    while(cin>>s1>>s2)
    {  int j=0,max=0;
        string x,y;
       fun(s1,s2);
       x=sp;
       // cout<<x<<endl;
        fun(s2,s1);
        y=sp;
       // cout<<y<<endl;
        if(x.length()<y.length())
       cout<<x<<endl;
       else
       cout<<y<<endl;
    }



return 0;
}
