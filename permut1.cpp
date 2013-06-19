#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int arr[99][13];

    for(int i=0;i<13;i++)
    arr[0][i]=1;
    for(int j=0;j<99;j++)
    arr[j][0]=0;
    
    for(int i=1;i<=98;i++)
    {
            for(int j=1;j<=12;j++)
                    arr[i][j]=arr[i-1][j]+arr[i][j-1]- (((i<=j) ? 0 : arr[j-1][i-j]));
    }
    
    int test;
    cin>>test;
    while(test--)
    {
                 int n,k;
                 cin>>n>>k;
                 cout<<arr[k][n-1]<<endl;
    }
return 0;
}
