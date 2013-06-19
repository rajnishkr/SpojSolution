#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL long long
using namespace std;
LL arr[505];
LL sum[505];
LL book[505];
int n;
int k;
LL tp;
LL assign(LL maxpages)
{
    int i,j;
    j=n-1;
    LL sum;
//    cout<<n<<k;
    for(i=k-1;i>=0;i--)
    {
      if(arr[j]>maxpages)
      return 0;
      book[j]=i;
      sum=arr[j--];
      while((j>=i) && ( (sum+arr[j])<=maxpages))
      {
                   book[j]=i;
                   sum+=arr[j--];
      }
  }
      return (j==-1);
}
LL find()
{
         LL end=tp+1;
         LL start=0LL,mid;
         while((end-start)>1LL)
         {
                         mid=(start+end)/2LL;
                         if(assign(mid))
                         end=mid;
                         else
                         start=mid;
         }
         return end;
}
                         
         
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
    
              scanf("%d%d",&n,&k);
              sum[0]=0;
              for(int i=0;i<n;i++)
              {
                      scanf("%lld",&arr[i]);
                      sum[i+1]=sum[i]+arr[i];
              }
              tp=sum[n];
              LL maxpages=find();
              assign(maxpages);
              cout<<maxpages<<endl;
              printf("%lld",arr[0]);
              for(int i=1;i<n;i++)
              {
                      if(book[i]!=book[i-1] )
                      printf(" /");
                      printf(" %lld",arr[i]);
              }
              printf("\n");
              }
  
return 0;
}
