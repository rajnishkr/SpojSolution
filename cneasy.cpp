#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>  
using namespace std;

int main(){
    float test,n,a;
    cin>>test;
    while(test--)
    {
                 cin>>n;
                 string s;
                 
                 vector<float> angle;
                 vector<float> diff;
                 for(float i=0;i<n;i++)
                 {
                         cin>>s;
                         cin>>a;
                         angle.push_back(a);
                 }
                 sort(angle.begin(),angle.end());
                 for(float i=1;i<n;i++)
                         diff.push_back(angle[i]-angle[i-1]);
                         diff.push_back(360-(angle[n-1]-angle[0]));
                 sort(diff.begin(),diff.end()); 
                float time=(360-diff[n-1])*12; 
                 int mt = (int)(time*100.0);
                
                 if ( mt % 100 )
                     time++;
                  printf("%d\n", (int) time );
                  }
                 return 0;
                 }
                 
