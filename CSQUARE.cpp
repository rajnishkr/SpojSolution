#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
int m;
long long pow(long long a,int n)
{
     if(n==1)
     return a;
     else
     {
         if(n%2==0)
         return ((pow(a,n/2)%m)*(pow(a,n/2)%m))%m;
         else
         return (a*(pow(a,(n-1)/2)%m)*(pow(a,(n-1)/2)%m))%m;
     }
     return 0;
}
     

using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {
                 
    long long n,b=1;
    int len;
    string s;
    cin>>n;
    cin>>s;
    cin>>m;
    len=s.length();
    long long arr[len+1];
    arr[0]=1;
    long long a1=((n%m*n%m)%m*n%m)%m;
   for(int i=1;i<len;i++)
    {
            arr[i]=(arr[i-1]*a1)%m;
            cout<<arr[i]<<" "<<i<<endl;
    } 
    for(int i=0;i<s.length();i++)
    {
            if(s[i]=='1')
            b=(b*(arr[len-1])%m)%m;
            else
            { if(s[i]=='2')
               b=(b*(arr[len-1]%m*arr[len-1]%m)%m)%m;
            }
            len--;
    }
    cout<<b<<endl;
  //  long long ans=pow(pow(),len-1),ans1,ans2;
    
    //cout<<ans<<endl;
    
}
    return 0;
}
