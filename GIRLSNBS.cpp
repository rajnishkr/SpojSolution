#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
int main(){
    
    int a,b,max,min,ans;
    scanf("%d%d",&a,&b);
    while(a!=-1)
    {
    max=a>b?a:b;
    min=a>b?b:a;
    min++;
    if(max%min==0)
    ans=max/min;
    else
    ans=max/min+1;
    cout<<ans<<endl;
    scanf("%d%d",&a,&b);
}
}
    
