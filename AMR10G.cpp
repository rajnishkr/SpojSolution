#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
   
    int test;
    cin>>test;
    while(test--)
    {
                  vector<int> vec;
                   vector<int> difference;
                 int n,k,a;
                 cin>>n>>k;
                 for(int i=0;i<n;i++)
                 {
                         cin>>a;
                         vec.push_back(a);
                 }
                 if(k==1)
                 {
                 cout<<0<<endl;
                 continue;
                 }
                 
                 sort(vec.begin(),vec.end());
                 for(int i=0;i+k-1<n;i++)
                 {
                      a=vec[i+k-1]-vec[i];
                     // cout<<a<<" ";
                      difference.push_back(a);
                 }
                 sort(difference.begin(),difference.end());
                 cout<<difference[0]<<endl;
   }
   return 0;
}  
                  
                         
