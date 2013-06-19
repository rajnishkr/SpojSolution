#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
vector <int>  v[10];
for(int i=0;i<10;i++)
v[i].push_back(i);
int k=0,j=0;
for(int i=2;i<10;i++)
{j=2;
k=((int)pow(v[i][0],(float)j))%10;
while(k!=v[i][0])
{v[i].push_back(k);
j++;
k=((int)pow(v[i][0],(float)j))%10;
}
}
int t;
cin>>t;
while(t--)
{
long long b,c,s,m;
string a1;
cin>>a1>>b;
int a=a1[a1.size()-1]-'0';
if(a==0 && b==0)
cout<<1<<endl;
else
{if(a==0)
cout<<0<<endl;
else{
if(b==0)
cout<<1<<endl;
else
{
c=a%10;s=v[c].size();m=b%s;
if(m!=0)
cout<<v[c][m-1]<<endl;
 else
cout<<v[c][s-1]<<endl;
}}}}
return 0;
}
                 
                      
