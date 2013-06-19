#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[1000001];
int main(){
int test;
cin>>test;
while(test--)
{
             int n;
             bool flag=false;
             cin>>n;
             vector<int> v;
             scanf("%d",&arr[0]);
             int sum=arr[0];
             //if(sum<0)
            // flag=true;
             for(int i=1;i<n;i++)
             {
                       scanf("%d",&arr[i]);
                       if(arr[i]<0)
                       {
                             if(arr[i-1]<0)
                             sum=sum+arr[i];
                             else {
                             if(flag)
                               v.push_back(sum);
                             sum=arr[i];
                             
                               }
                               flag=true;
                             
                             
                       }
                       else
                       sum=sum+arr[i];
             }
             if(flag)
             v.push_back(sum);
            // cout<<sum<<endl;
             ///for(int i=0;i<v.size();i++)
             //cout<<v[i]<<" ";
             int l=0,k=1,sum1=arr[0];
             for(int i=1;i<n;i++)
             {
                     if(arr[i]<0)
                     {
                                 if(v[l]<=0)
                                 k=2;
                                 else
                                 k++;
                                 if(arr[i]>=0)
                                 l++;
                     }
                     else
                     k++;
                    // cout<<k<<" ";
                      sum1+=arr[i]*k;
             }
             cout<<sum1<<endl;                             
}


return 0;
}
