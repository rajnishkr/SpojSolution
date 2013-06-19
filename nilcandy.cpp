#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
int cases=0;
long long n,count,len,lenAvail;
cin>>cases;
while(cases--)
{
cin>>n;
lenAvail=0;
long double temp=(long double)log2((long double)n);
lenAvail=(long long)temp;

if(temp!=lenAvail)
lenAvail++;
//cout<<"\n"<<temp<<" "<<lenAvail;
lenAvail=(long long)pow((double)2,(double)lenAvail);
len=lenAvail;
count=0;
while(1)
{
if(n==0)
break;
if(n<lenAvail){
lenAvail/=2;
count++;
}
else
n-=lenAvail;
}
cout<<len<<" "<<count<<endl;
}
return 0;
}
