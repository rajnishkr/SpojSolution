#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int sum[n+1][m+1];
    int arr[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    scanf("%d",&arr[i][j]);
    /*for(int i=0;i<=m;i++)
    sum[0][i]=0;
    for(int i=0;i<=n;i++)
    sum[i][0]=0;*/
    sum[1][1]=arr[0][0];
    for(int i=1;i<=n;i++)
    {for(int j=1;j<=m;j++)
    {sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+arr[i-1][j-1];
  //  cout<<sum[i][j]<<" ";
    }
    //cout<<endl;
   }
   int a,b,c,i,j,k,l,current_sum;
   scanf("%d%d",&a,&b);
   if(a>b)
   {
           c=a;
          a=b;
          b=c;
   }
   c=0;
   for(i=1;i<=n;i++) 
           for(j=1;j<=m;j++)
                   for( k=0;k<=n-i;k++)
                           for( l=0;l<=m-j;l++)
                           {
                                   current_sum = sum[i+k][j+l]-sum[i-1][j+l]-sum[i+k][j-1]+ sum[i-1][j-1];
                                   //cout<<current_sum<<" ";
                                   if(current_sum>=a &&  current_sum<=b)
                                   c++;
                           }
   
   printf("%d\n",c);
    

//cin>>n;
return 0;
}
