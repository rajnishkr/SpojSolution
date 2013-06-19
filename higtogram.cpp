#include<iostream>
#include<cstdio>
#define inf 1<<30
#include<algorithm>
#include<vector>
#define LL long long
using namespace std;
LL input[100005];
int main(){
    int n;
    while(1)
    {
    scanf("%d",&n);
    if(n==0)
    break;
    LL x,m=inf;
    for(int i=0;i<n;i++)
    {
            scanf("%lld",&input[i]);
            m=min(m,input[i]);
    }
    LL area=0;
    for(int i=0;i<n;i++ )
    {
            int j=i;
            int c=0;
            LL val=input[i];
            if(input[i]==m)
             {area=max(area,val*n);
             continue;
             }
            while(input[j]>=val && j>0)
            c++,j--;
            j=i+1;
            while(input[j]>=val && j<n)
            c++,j++;
            area=max(area,val*c);
    }
    cout<<area<<endl;
}

return 0;
}
