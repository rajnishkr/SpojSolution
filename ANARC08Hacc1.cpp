#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[100005];
int main(){
int n,r;
while(1)
{
scanf("%d%d",&n,&r);
if(n==0 && r==0)
break;
arr[0]=0;
arr[1]=0;
for(int i=2;i<=n;i++)
arr[i]=(arr[i-1]+r)%i;
printf("%d %d %d\n",n,r,arr[n]+1);
}
return 0;
}

