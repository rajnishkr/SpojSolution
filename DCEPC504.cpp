#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL long long 
using namespace std;
int main(){
int test;
scanf("%d",&test);
LL power[52];
LL p=1LL;
LL n,k,count,s,x;
int arr[5]={0,1,0,0,1};
for(int i=0;i<51;i++)
{ p=p*2;
  power[i]=p;
}
string str[2];
str[0]="Female";
str[1]="Male";

while(test--)
{
             
              
             scanf("%lld%lld",&n,&x);
             int i;
             count=0;
             if(x>4)
             {
             for(i=50;i>=1;i--)
             {   // cout<<i<<endl;
                if(power[i]<x)
                {
                  x=x-power[i];
                  count++;
                  //cout<<x<<endl;
                }
                
             }
             }
             //cout<<x<<endl;
             if(count%2==0)
             cout<<str[arr[x]]<<endl;
             else
             cout<<str[!arr[x]]<<endl;
}
return 0;
}
