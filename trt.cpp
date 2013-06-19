#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[2001][2001];
int input[2001];
int n;
int max_treat(int i,int j)
{
   
   if(i==j)
   return n*input[i];
   if(arr[i][j]!=0)
   return arr[i][j]; 
   arr[i][j]=max( (i+n-j)*input[i]+max_treat(i+1,j),(i+n-j)*input[j]+max_treat(i,j-1));
   return arr[i][j];   
}
int main(){
while(cin>>n)
{
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
arr[i][j]=0;

for(int i=0;i<n;i++)
scanf("%d",&input[i]);
int ret=max_treat(0,n-1);
printf("%d\n",ret);
}
return 0;
}
