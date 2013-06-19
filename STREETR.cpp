#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
            cin>>a;
            v.push_back(a);
    }
    sort(v.begin(),v.end());
    vector<int> v1;
    for(int i=0;i<n-1;i++)
    {
           int k=v[i+1]-v[i];
            v1.push_back(k);
    }
    sort(v1.begin(),v1.end());
   
    int k=v1[0],p=1;
    while(p)
    {      
          p=0;
         for(int i=0;i<n-1;i++)
         {
            if(v1[i]%k!=0)
             { p=1;
              break;
              }
                
          }
              if(p==1)
              k--;
                
     }
     int sum=0;
     for(int i=0;i<n-1;i++)
     sum+=(v1[i]/k-1);         
      cout<<sum<<endl;
      //system("pause");
      return 0;
      }        
             
             
     
