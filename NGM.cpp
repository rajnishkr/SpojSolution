#include<iostream>
#include<cstdio>
using namespace std;

int main(){


long long n;
cin>>n;
int m=n%10;
if(m==0)
cout<<'2'<<endl;
else
{
    cout<<'1'<<endl;
    cout<<n%10<<endl;
}
// system("pause");
return 0;
}





