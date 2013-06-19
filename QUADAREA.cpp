#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    double test,a,b,c,d,s,area;
    cin>>test;
    while(test--)
    {
                 
                 cin>>a>>b>>c>>d;
                 s=(a+b+c+d)/(float)2;
                 area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
                 printf("%.2f\n",area);
                 
    }
    return 0;
}
                 
