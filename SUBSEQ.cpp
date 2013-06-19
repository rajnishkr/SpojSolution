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
                     if(sum[1]==0)
                      start=1;
                     else
                      start=0;
                     for(int i=start;i<=n;i++)
                     {
                      int low=start,high=n;
                    //  cout<<" searching "<<sum[i]+47<<endl;
                      while(low<=high)
                      {
                                   //  cout<<low<<" "<<high<<endl;
                                      //system("pause");
                                     mid=(low+high)/2;
                                     if(sum[mid]==sum[i]+47){
                                                             x=mid;
                                                             while(sum[x]==(sum[i]+47) && x<=n)
                                                              {
                                                              x++;
                                                              count++;
                                                              }
                                                              x=mid-1;
                                                              while(sum[x]==(sum[i]+47) && x>=0)
                                                              {
                                                              x--;
                                                              count++;
                                                              }
                                                              //cout<<" found \n";
                                                              break;
                                                             }
                                     else if(sum[mid]<(sum[i]+47)) low=mid+1;
                                     else high=mid-1;
                      }
                     
                     }
                      cout<<count<<endl;
           }

return 0;
}
