#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=-1)
    {
                int arr[n],sum=0;;
                for(int i=0;i<n;i++)
                {
                        cin>>arr[i];
                        sum+=arr[i];
                }
                 if(sum%n!=0)
                 {
                             cout<<-1<<endl;
                             cin>>n;
                             continue;
                 }
                 int avg=sum/n,move=0;
                 for(int i=0;i<n;i++) 
                 {
                         if(arr[i]<avg)
                         move+=avg-arr[i];
                 }
                 cout<<move<<endl;
                 cin>>n;
                 
    }
    return 0;
}
