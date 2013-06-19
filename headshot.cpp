#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<vector>
using namespace std;

int main(){
    string s1;
    float count=0,sum=0;
    vector <int> c;
    int j,count1=0;
    getline(cin,s1);
    for(int i=0;i<s1.size();i++)
    {
          if(s1[i]=='0')
           {             count++;
                         count1++;
                        if(i==(s1.size()-1))
                         j=0;
                         else
                         j=i+1;
                        if(s1[j]=='1')
                        {
                           c.push_back(count1);
                           count1=0;
                        }
                        
           }
    }
    if(count1!=0)
     c.push_back(count1);
    float a=0,b;
    for(int i=0;i<c.size();i++)
     {a+=(c[i]-1);
    // cout<<c[i]<<" "<<endl;
     }
     a=a/count;
   // a=sum/s1.length();                                        8
     b=count/s1.length();
    //cout<<a<<" "<<b<<" "<<s1.length()<<" "<<count<<endl;
    if(count==s1.length())
    cout<<"SHOOT\n"; 
    else
    {
    if(a==b)
    cout<<"EQUAL\n";
    else { 
         if(a>b)
    cout<<"SHOOT\n";                  
    else 
    cout<<"ROTATE\n";
     }
     }
  // system("pause");
    return 0;
}
