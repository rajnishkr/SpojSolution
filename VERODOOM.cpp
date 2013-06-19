#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL unsigned long long
#define inf 10000000000000LL
using namespace std;
LL arr[50000005];
int main(){
    
    int test;
    scanf("%d",&test);
    arr[0]=0;
    arr[1]=3;
    for(int i=2;i<50000001;i++)
    arr[i]=arr[i-1]+(LL)(i*(i+1)*3)/2;
            
    while(test--)
    {
    int n;
    scanf("%d",&n);
    cout<<arr[n]<<endl;
    }
return 0;
}
