#include<iostream>
#include<cmath>
using namespace std;
int main(){int n=10;
while(n>0)
{string t;cin>>t;int l=t.length(),c=0,i;for(i=0;i<l;i++)if(t[i]=='T'||t[i]=='D'||t[i]=='L'||t[i]=='F')c++;c=pow(2,(double)c);cout<<c<<"\n";n--;}return 0;
}
