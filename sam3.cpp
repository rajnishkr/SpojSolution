#include<cstdio>
#include<iostream>
using namespace std;
int main(){
int test;
scanf("%d",&test);
while(test--)
{
int i,n,flag=0;
scanf("%d",&n);
for( i=0;i<=n/4;i++)
{
if((n-4*i)%7==0)
{
cout<<(n-4*i)<<endl;
flag=1;
break;
}
}
if(!flag)
cout<<-1<<endl;

}
//system("pause");
return 0;
}
