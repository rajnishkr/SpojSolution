#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){   
int n;
cin>>n;
while(n)
{         
 int v[n];
 int a,f=0,b=0;
for(int i=0;i<n;i++)
{
 cin>>a;
 v[i]=a;
}
if(n<7)
{
cin>>n;
cout<<"IMPOSSIBLE\n";
continue;
} 
int ele=sizeof(v)/sizeof(v[0]);
sort(v,v+ele);

int flag1=0;
for(int i=0;i<n-1;i++)
{
if(v[i+1]-v[i]>200)
{ 
 flag1=1;
 break;
}
}
if(v[0]>200)
flag1=1;
if(v[n-1]<1322)
flag1=1;
if(flag1==1 )
cout<<"IMPOSSIBLE\n";
else
cout<<"POSSIBLE\n";
cin>>n;     
}
return 0;
}
