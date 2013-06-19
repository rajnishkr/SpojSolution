#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[1000001],sum[1000001];
int main(){

           int t,count,n,mid,low,high,x,start;
           
           cin>>t;
           while(t--)
           {
                     cin>>n;
                     for(int i=0;i<n;i++)
                      cin>>arr[i];
                      
                     
                     sum[0]=0;
                     for(int i=1;i<=n;i++)
                     sum[i]=sum[i-1]+arr[i-1];
                     
                     
                     
                     count=0;
                     sort(sum,sum+n);
                     /*for(int i=0;i<=n;i++)
                      cout<<sum[i]<<" ";
                         cout<<endl; */

   long i = 1, j = 1;
    while (j<=n-1) {
          
      if (sum[j]-sum[i]<47) j++;
      else if (sum[j]-sum[i]>47) i++;
      else {
           
        int ie, je;
        for (ie=i; sum[ie+1]==sum[ie]; ++ie); 
        ++ie;
        for (je=j; sum[je+1]==sum[je]; ++je);
         ++je;
        while (i<ie && j<je)
         { if (arr[i-1]>arr[j-1]) j++; 
          else { count += je-j; 
              i++; 
              }
          }
        i = ie; j = je;
      }
    }
                      cout<<count<<endl;
           }

return 0;
}
