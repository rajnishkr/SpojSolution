#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {
                 int n,x=0;
                 cin>>n;
                 int arr[n],flag=0;
                 for(int i=0;i<n;i++)
                 {cin>>arr[i];
                  if(arr[i]!=1)
                  flag=1;
                  x=x ^ arr[i];
                 }
                 
                 if(!flag)
                  {
                       if(x==0)
                       cout<<"John\n";
                       else
                       cout<<"Brother\n";
                  }
                  else
                  {
                      if(x==0)
                      cout<<"Brother\n";
                      else
                      cout<<"John\n";
                 }
    } 
    


return 0;
}
