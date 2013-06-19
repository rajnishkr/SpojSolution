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
int main(){
vector<int> v;
int j;
for(int i=0;i<5;i++)
{
        SS(j);
        v.pb(j);
}
cout<<lower_bound(v.begin(),v.end(),10)-v.begin();       

system("pause");
return 0;
}
