#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;
 long long  arr[101][101];
 int sum[101],c[101];
int main(){
int n,p,q;
while(cin>>n)
{
            
             for(int i=0;i<n;i++)
             cin>>c[i];
             
             sum[0]=c[0];
             
             for(int i=1;i<n;i++)
             sum[i]=sum[i-1]+c[i];
             
             
              for(int diff=0;diff<n;diff++)
              {
                      for(int i=0;i<n-diff;i++)
                      {     
                             int j=i+diff;
                              if(i==j)
                              {
                              arr[i][j]=0;
                              continue;
                              }
                              long long m=1<<30;
                             // cout<<m;
                              for(int k=i;k<j;k++)  
                                {     
                                      if(i==0)
                                     p=sum[k]%100;
                                     else
                                     p=(sum[k]-sum[i-1])%100;
                                     
                                     q= (sum[j]-sum[k])%100;      
                                        
                                      m=min(m,arr[i][k]+arr[k+1][j]+p*q);
                                      
                                }
                              arr[i][j]=m;
                      }
              }
            /*  for(int i=0;i<n;i++)
              {
                      for(int j=0;j<n;j++)
                      cout<<arr[i][j]<<" ";
                      cout<<endl;
              }*/
              cout<<arr[0][n-1]<<endl;
}
                              


return 0;
}

