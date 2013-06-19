#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int main() {
     long long i,j,k;
     cin>>i>>j>>k;
     while(1)
     {  
        if(i==0 && j==0 && k==0)
        return 0; 
     if((2*j)==i+k)
     cout<<"AP"<<" "<<i+3*(k-j)<<endl;
     else { if((int)pow(j,2.0)==(i*k) )
      cout<<"GP"<<" "<<i*pow(j/(float)i,3)<<endl;
      }
      
       cin>>i>>j>>k;
      }
      
           //system("pause");
        return 0;      
    }


