#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long a,b,sum=0;
    cin>>a>>b;
    if(a%2!=0)
    { sum=1;
      a++;
    }
    if(b%2!=0)
    { b--;
      sum++;
    }
    sum=sum+(b-a)/2;
    for(int i=a;i<=b;i=i+2)
    {
            sum=sum+ (i& (~(i-1)));
            //cout<<i<<" "<<(i& (~(i-1)))<<endl;
    }
    cout<<sum ;


cin>>a;
return 0;
}
