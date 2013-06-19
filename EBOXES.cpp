#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    
    int n,k,t,f,test;
    cin>>test;
    while(test--)
    {
                 
    scanf("%d%d%d%d",&n,&k,&t,&f);
    int x=(f-n)/(k-1);
    int ans=n+x*k;
    cout<<ans<<endl;
   }
   return 0;
}
