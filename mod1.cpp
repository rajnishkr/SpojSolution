#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        int ans,ans1;
        cin>>n;
        if(n!=1 && n!=2)
        ans=n/2+1;
        ans1=ans;
        if(n==1)
        {ans=1;
        ans1=1;
        }
        if(n==2)
        {
                ans=1;
                ans1=2;
        }
        
        
        cout<<ans<<" "<<ans1<<endl;
   }
    return 0;
}
