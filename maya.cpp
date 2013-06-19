#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int count(string s)
{    int sum=0;
    for(int i=0;i<s.size();i++)
    {
            if(s[i]=='.')
            sum++;
            if(s[i]=='-')
            sum=sum+5;
    }
    return sum;
}
int main(){
    string s;
    int maya[7],n;
    maya[0]=1;
    maya[1]=20;
    maya[2]=360;
    for(int i=3;i<7;i++)
     maya[i]=maya[i-1]*20;
     cin>>n;
     getline(cin,s);
    while(n)
    {
            
            int m[n],digit;
            for(int i=0;i<n;i++)
            {
            getline(cin,s);
             m[n-i-1]=count(s);
             }
             long long sum=0;
             for(int i=0;i<n;i++)         
                 sum=sum+m[i]*maya[i];
             cout<<sum<<endl;
            getline(cin,s);
             cin>>n;
            getline(cin,s);
    }
    return 0;
}    
