#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int c,co,n;
int x[101][101];
int rec(bool arr[],int i,int k)
{    
     for(int i1=0;i1<n;i1++)
     cout<<arr[i1]<<" ";
     cout<<endl;
     cout<<k<<endl;
     if (x[i][k]!=-1)
     return x[i][k];
     if(i>=n)
     return 0;
     
     if(n-i+k<c)
     return 0;
     
     if(k>c)
     return 0;
     
    if(k==c)
    return 1;
    
    x[i][k]+=rec(arr,i+1,k);
    arr[i]=true;
    
    if(i==0 || arr[i-1]==false)
    x[i][k]+=rec(arr,i+1,k);
    else
    x[i][k]+=rec(arr,i+1,k+1);
    }
    
            
    
    
    
    
    
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
               bool arr[102];
               int t1;
               scanf("%d%d%d",&t1,&n,&c);
               for(int i=0;i<=n;i++)
               arr[i]=false;
               for(int i=0;i<n;i++)
               for(int j=0;j<n;j++)
               x[i][j]=-1;
               co=0;
               rec(arr,0,0);
               for(int i=0;i<n;i++){
               for(int j=0;j<n;j++)
               cout<<x[i][j]<<" "; 
               cout<<endl;
               }               printf("%d %d\n",t1,x[n-1][c]);
               }
return 0;
}
