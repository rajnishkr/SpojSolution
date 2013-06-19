#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[100003];
int main(){
int n,x,y;
cin>>n;
for(int i=0;i<n-1;i++)
{
 scanf("%d%d",&x,&y);
 arr[x-1]++;
 arr[y-1]++;
}
sort(arr,arr+n);
int count=0,sum=0,j=n-1;
bool flag=false;
while(sum!=(n-1))
{
      sum=sum+arr[j];
      if(sum>n-1)
       sum-=arr[j];
       else
       count++;
      j--;
      if(j==0)
      {flag=true;
       break;
      }
      //cout<<arr[count]<<endl;
      
} 
if(flag)
count=n-1; 
cout<<count;
//cin>>count;
return 0;
}
