#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
long long s[n];
for(int i=0;i<n;i++)
cin>>s[i];
long long sum=s[0]%n;
for(int i=1;i<n;i++)
sum+=s[i]%n;
if(sum%n==0)
cout<<"YES\n";
else
cout<<"NO\n";

}
return 0;
}


