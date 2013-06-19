#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int w=0,n=0;
    
    
    cin>>w>>n; 
    while(w!=0)
    {
               
    int arr[n+1][w+1];
    for(int i=0;i<=w;i++)
    arr[0][i]=0;
    for(int i=0;i<=n;i++)
    arr[i][0]=0;
    int wi,pi,i,j;
    for(i=1;i<=n;i++)
    {   cin>>wi>>pi;
        for(j=1;j<=w;j++)
        {
           
            if(j-wi<0)
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=max(arr[i-1][j],arr[i-1][j-wi]+pi);
    }
    }
    int k=w;
     while(arr[n][w]==arr[n][k-1])
     k--;
     cout<<k<<" "<<arr[n][w]<<endl;
  /* for(int i=0;i<=n;i++)
    {
    for(int j=0;j<=w;j++)
    cout<<arr[i][j]<<" ";
    cout<<endl;
    } */

    cin>>w>>n;
   }
    return 0;
    }
                    
