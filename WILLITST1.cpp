#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
long long n;
cin>>n;
if(n==1 || n==0)
{printf("TAK");
 return 0;
}
double k=log2(n);
int k1=(int)k;
if(k==k1)
printf("TAK");
else
printf("NIE");
return 0;
}
