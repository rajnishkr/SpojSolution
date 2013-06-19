#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    long long n,a;
    cin>>n;
    vector<int> v;
    if(n==0)
    {cout<<0;                                  
     return 0;
     }
     a=n;
    while(n!=0)
    {          int i=n%2;
               if(i==0)
               v.push_back(0);
               else
               v.push_back(1);
               if(n<0)
               n=(-1*n+1)/2;
               else
               n/=-2;
    }
       
        int s=v.size();
        for(int i=s-1;i>=0;i--)
        cout<<v[i];
      system("pause");
        return 0;      
    }


