#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
   scanf("%d",&n);
    int count=0;
     if(n==1)
     {cout<<n;
     return 0; 
     }  
    for(int i=1;i<n;i++)
    {       int c=1;
            for(int j=i;(i*j)<=n;j++)
             {c=0;
              count++;
              }
              if(c)
           break;
    }
    cout<<count<<endl;
   
    return 0;
}
                   
