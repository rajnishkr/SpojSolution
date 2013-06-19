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
#include<queue>
using namespace std;
int main(){
    int test;
    SS(test);
    while(test--)
    {
    
    int n;
    SS(n);
    cout<<n<<endl;
    int rem[20002]={0},m;
    queue<int> q;
    q.push(1);
    rem[1]=1;
    while(!q.empty())
    {
    int t=q.front();
    q.pop();
    int n1,m;
    n1=t*10;
    m=t*10+1;
    //cout<<n1<<" "<<m<<endl;
    int r1=n1%n,r2=m%n;
    cout<<r1<<" "<<r2<<endl;
    if(rem[r1]!=1 && r1!=0)
    {
      q.push(n1);
      rem[r1]=1;
    }
    if(r1==0)
    {
      printf("%d\n",n1);
      break;
    }
    if(rem[r2]!=1 && r2!=0)
    {
      q.push(m);
      rem[r2]=1;
    }
    if(r2==0)
    {
      printf("%d\n",m);
      break;
    }
}
}
system("pause");
return 0;
}
