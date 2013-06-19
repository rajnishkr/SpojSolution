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
#include <time.h>

using namespace std;
int main(){
srand ( time(NULL) );
int i,j,ans;
while(1)
{
i = rand() % 10 + 11;
j= rand() % 10  ;
printf("%d * %d = : ",i,j);
scanf("%d",&ans);
if (ans==i*j)
cout<<"true"<<endl;
else
cout<<i*j<<endl;
}
//system("pause");
return 0;
}
