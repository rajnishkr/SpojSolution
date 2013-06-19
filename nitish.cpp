#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
using namespace std;

int a=0,b=0,cnt=0,N;

void fn(int n,char ch) {
     cout<<ch;
if(n==N) { cnt++;
cout<<endl; return; }

if(a!=2) { a++; fn(n+1,'a'); }
if(b<1) {a=0; b++; fn(n+1,'b'); }
a=0; fn(n+1,'c');
}


int main() {
a=0;b=0;cnt=0;
cin>>N;
a++; fn(1,'a');
a=0; b++; fn(1,'b');
a=0,b=0; fn(1,'c');
cout<<cnt;
system("pause");
return 0;
}

