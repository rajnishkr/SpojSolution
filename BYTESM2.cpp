#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    
    int test,n,m;
    scanf("%d",&test);
    while(test--)
    {
                 scanf("%d",&n);
                 m=3;
                 int arr[n][m],ans[n][m];
                 for(int j=0;j<m;j++)
                 {
                         scanf("%d",&arr[0][j]);
                         ans[0][j]=arr[0][j];
                 }
                 for(int i=1;i<n-1;i++)
                 {
                         for(int j=0;j<m;j++)
                         {       
                                 cin>>arr[i][j];
                                 int max=0;
                                 if(j!=0)
                                 max=arr[i][j]+ans[i-1][j-1];
                                 if(max<ans[i-1][j]+arr[i][j])
                                 max=ans[i-1][j]+arr[i][j];
                                 if(j!=m-1)
                                 {if(max<ans[i-1][j+1]+arr[i][j])
                                 max=ans[i-1][j+1]+arr[i][j];
                                 }
                                 ans[i][j]=max;
                         }
                 }
                 int rmax=0;
                 for(int j=0;j<m;j++)
                 {
                       
                                 cin>>arr[n-1][j];
                                 int max=0;
                                 if(j!=0)
                                 max=arr[n-1][j]+ans[n-2][j-1];
                                 if(max<ans[n-2][j]+arr[n-1][j])
                                 max=ans[n-2][j]+arr[n-1][j];
                                 if(j!=m-1)
                                 {if(max<ans[n-2][j+1]+arr[n-1][j])
                                 max=ans[n-2][j+1]+arr[n-1][j];
                                 }
                                 ans[n-1][j]=max;
                                  if(max>rmax)
                                  rmax=max;
                 }
                 printf("%d\n",rmax);
    }
    return 0;
}
