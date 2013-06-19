#include<vector>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
    int test;
    cin>>test;
    while(test--)
    {
                 vector<int> gor;
                 vector<int> mech;
                 gor.clear();
                 mech.clear();
                 int g,m,a;
                 cin>>g>>m;
                 for(int i=0;i<g;i++)
                 {
                          cin>>a;
                          gor.push_back(a);
                 }
                  for(int i=0;i<m;i++)
                 {
                          cin>>a;
                          mech.push_back(a);
                 }
                 sort(mech.begin(),mech.end());
                 sort(gor.begin(),gor.end()); 
                 if(gor[g-1]>=mech[m-1])
                 cout<<"Godzilla\n";
                 else
                 cout<<"MechaGodzilla\n";
                 }
                 return 0;
                 }
