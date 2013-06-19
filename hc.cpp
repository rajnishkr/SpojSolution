#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int test;
cin>>test;
while(test--)
{
             int n;
             cin>>n;
             string s;
             int c=0;
             for(int i=0;i<n;i++)
             {
                     cin>>s;
                     if(s[0]=='l')
                     c++;
             }
             if(c%2!=0)
             cout<<"lxh\n";
             else
             cout<<"hhb\n";
}
             

return 0;
}
