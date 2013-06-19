#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
 long long n;
 cin>>n;
set<long long> s;
bool flag=0;
 while (n > 1)
 { 
 if(s.count(n))
 {flag=1;
 break;
 }
 else
 s.insert(n);  
 if( n%2 == 0)
 n=n/2;
  else
    n=3*n+3;
    if(n<0)
    cout<<endl;   
}
if(flag)
printf("NIE");
else
printf("TAK");


//system("pause");
return 0;
}
