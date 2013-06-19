#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int main() {
vector<string> str;
str.push_back("192");
str.push_back("442");
str.push_back("692");
str.push_back("942");
int test;
cin>>test;
while(test--)
{
long long k,l;
cin>>k;
int j=k%4;
l=k/4;
//cout<<j<<" "<<l<<" ";
string x;
if(j==0) {
x=str[3];
l--;
}
else
x=str[j-1];
if(l!=0){
while(l!=0){
int p=l%10;
char c=p+'0';
x.insert(0,1,c);
l=l/10;}
cout<<x<<endl;
}
else{
if(j!=0) 
cout<<str[j-1]<<endl;
else
cout<<str[3]<<endl;
}}
return 0;
}  
    
          
