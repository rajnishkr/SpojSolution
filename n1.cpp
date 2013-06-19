#include<iostream>
#include<cstring>
using namespace std;
int main()
{
string a;
cin>>a;
while(a!=".")
{
int n;

cin>>n;
int ln=a.size();
for(int i=0;i<ln;i++)
{
for(int j=0;j<n;j++)
cout<<a;
cout<<endl;
char b=a[0];
a.push_back(b);
a=a.erase(0,1);
}
system("pause");
cin>>a;
}
return 0;
}
