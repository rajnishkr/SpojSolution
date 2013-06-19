#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
string source,target;
int arr[2005][2005];

int min(int a,int b,int c)
{
int mini=a;
if(b<mini)
mini=b;
if(c<mini)
mini=c;
return mini;
 }   
 
//edist 
int edist()
{
int ls,lt,cost,l=0;
ls=source.length();
lt=target.length();
if(ls==0)
return lt;
if(lt==0)
return ls;
for(int k=0;k<ls+1;k++)
arr[0][k]=k;
for(int i=0;i<lt+1;i++)
{
arr[i][0]=l++;
}
for(int i=1;i<=lt;i++)
{
for(int j=1;j<=ls;j++)
{
if(source[i-1]==target[j-1])
cost=0;
else
cost=1;
arr[i][j]=min(arr[i-1][j]+1,arr[i][j-1]+1,arr[i-1][j-1]+cost);
}
}
int r=arr[lt][ls];
return r;
}  

               
int main(){
int  test;
cin>>test;
getline(cin,source);
while(test--)
{                
getline(cin,source);
getline(cin,target);
cout<<edist()<<endl;
}


return 0;
}
