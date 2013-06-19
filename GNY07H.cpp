#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int arr[1001];
arr[0]=0;
arr[1]=1;
arr[2]=5;
arr[3]=11;
arr[4]=36;
for(int i=5;i<1001;i++)
arr[i]=arr[i-1]+5*arr[i-2]+arr[i-3]-arr[i-4];
int t,l=1;
cin>>t;
while(t--)
{
          int n;
          cin>>n;
          cout<<l++<<" "<<arr[n]<<endl;
}
return 0;
}

