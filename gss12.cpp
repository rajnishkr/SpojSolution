#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define min 1<<30
#define LL long long 
int arr[50005];
LL query(int i1,int j1)
{
             LL sum,max=-min,prev;
                 sum=0;
                 prev=0;
                // cout<<max<<endl;
                 for(int i=i1;i<=j1;i++)
                 {
                         
                         sum=sum+arr[i];
                         if(sum-prev>max)
                         max=sum-prev;
                         if(sum<prev)
                         prev=sum;
                         
                        // cout<<co<<endl;
                         
                 }
                 return max;
}
          
using namespace std;
int main(){
int n;
scanf("%d",&n);

for(int i=0;i<n;i++)
scanf("%d",&arr[i]);

int q;
scanf("%d",&q);

while(q--)
{
          int i,j;
          scanf("%d%d",&i,&j);
          printf("%lld\n",query(i-1,j-1));
}

return 0;
}
