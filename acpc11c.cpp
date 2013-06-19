#include<iostream>
#incldue<cstdio>
#include<vector>
using namespace std;
int main(){
    int tes;
    cin>>tes;
    while(tes--)
    {
     int n;
     cin>>n;
     int arr[n+1];
     int sum1,sum2,i=1,j=n,k,count=0,t=0;
     for(int i=1;i<=n;i++)
     cin>>arr[i];
     sum1=arr[1];
     sum2=arr[n];
     if(arr[1]>arr[n])
     {
        t=t+arr[n];
        flag=2;
     }
     else
     {   t=t+arr[0];
     flag=1;
     }
      count=1;   
     
     while(count!=n)
     {
        if(sum1>=sum2)
        {  
           sum2=arr[i+1]+sum2;
           sum1=sum1+arr[i+1];
           if(flag==0)
           t=t+arr[i];
           else
           {
               flag=0;
               
           
     
     
     
                
    }
