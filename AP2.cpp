#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {
                 
    long long first,last,sum,l;
    cin>>first>>last>>sum;
    double ll;
    ll=(double)sum/(double)(first+last);
    l=ll*2;
    cout<<l<<endl;
    long long  d=(last-first)/(l-5),a;
    a=first-2*d;
    for(int i=0;i<l-1;i++)
    cout<<a+i*d<<" ";
    cout<<a+(l-1)*d<<endl;
}
return 0;
}
    
