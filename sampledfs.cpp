#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define LL long long
using namespace std;
//int n;
void dfs(int n)
{
     if(n>=10)
     {n=0;
     return;
     }
     n++;
     dfs(n);
     cout<<n<<endl;
     system("pause");
     dfs(n);
     return ;
}
int main(){
    
    dfs(0);
    int n;
cin>>n;
return 0;
}
