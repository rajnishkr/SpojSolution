#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define min 1<<30
#define LL long long
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
                 int n,x;
                 scanf("%d ",&n);
                 LL sum,max=-min,co,c,prev;
                 sum=0;
                 co=0;
                 c=1;
                 prev=0;
                // cout<<max<<endl;
                 for(int i=0;i<n;i++)
                 {
                         scanf("%d",&x);
                         sum=sum+x;
                         if(sum-prev>max)
                         max=sum-prev,co=c;
                         else if(sum-prev==max)
                         co+=c;
                         
                         if(sum<prev)
                         prev=sum,c=1;
                         else if(sum==prev)
                         c++;
                        // cout<<co<<endl;
                         
                 }
                 cout<<max<<" "<<co<<endl;
}
return 0;
}
