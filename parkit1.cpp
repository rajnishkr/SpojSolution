#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main(){
    int r,b;
    cin>>r>>b;
    float f=(r-4)/2.0;
    int l,br;
    l=(f+sqrt(f*f-4*b))/2;
    br=b/l;
    if(l>br)
    cout<<l+2<<" "<<br+2<<endl;
    else
     cout<<br+2<<" "<<l+2<<endl;
    // cin>>r;
     return 0;
     }
