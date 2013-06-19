#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0)
    {
    char c;
    getchar();
    for(int i=0;i<n;i++)
    {
    string s,s1=" ";
    getline(cin,s);
    int len=s.length();
    for(int i=0;len--;i=i+2)
    { s1[0]=s[i];
     s.insert(i,s1);
    }
    cout<<s<<endl<<s<<endl;
   }
   cin>>n;
}
return 0;
}
