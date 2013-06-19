#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int test,l=1;
    cin>>test;
    
    while(test--)
    {            
                 float v,g,r,out;
                 g=9.806;
                 cin>>r>>v;
                 printf("Scenario #%d: ",l++);
                 out=(r*g)/(v*v);
                 if(out>=1)
                 cout<<"-1"<<endl;
                 else
                 {
                 out=(asin(out)/2)*180/(2*acos(0.0));
                 printf("%.2f\n",out);
                 }
    }
                            
return 0;
}
