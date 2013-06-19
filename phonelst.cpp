#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL long long
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
    int n;
    scanf("%d",&n);
    vector<string>  vec;
    string x;
    for(int i=0;i<n;i++)
    {       cin>>x;
            vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    int lcp[n+1];
    lcp[0]=-1;
    bool flag=false;
    for(int i=1;i<n;i++)
    {
            int j=0;
            int len=vec[i-1].size();
            while(vec[i][j]==vec[i-1][j])
            {
               j++;
               if(j==len)
               {flag=true;
               break;   }
            }
            if(flag)
            break;
    }
    if(flag)
    printf("NO\n");
    else
    printf("YES\n");
  }
return 0;
}
