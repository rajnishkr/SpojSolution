#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL long long
using namespace std;
int main(){
int test,l=1,x,n;
scanf("%d",&test);
while(test--)
{            LL sum=0,max=0;
             scanf("%d",&n);
             for(int i=0;i<n;i++)
             {
                     scanf("%d",&x);
                     sum=sum+x;
                     if(sum<max)
                     max=sum;
             }
             printf("Scenario #%d: %lld\n",l++,-max+1);
}

return 0;
}
