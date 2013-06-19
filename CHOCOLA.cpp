#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
using namespace std;
int arr1[1005],arr2[1005];
int main(){
int test;
SS(test);
while(test--)
{
             int n,m;
             SS(m); SS(n);
             int sumn=0,summ=0,sol=0; 
             for(int i=1;i<m;i++)
              scanf("%d",&arr1[i]),summ+=arr1[i];
             for(int i=1;i<n;i++)
              scanf("%d",&arr2[i]),sumn+=arr2[i];
              
              sort(arr1+1,arr1+m);
              sort(arr2+1,arr2+n);
               //cout<<"x";
               n--;
               m--;
              while(n||m)
              {
                 if(arr1[m]>arr2[n])
                 {sol+=arr1[m]+sumn;
                 summ-=arr1[m];
                 m--;
                 }
                 else
                 {
                     sol+=arr2[n]+summ;
                     sumn-=arr2[n];
                  1   n--;
                 }
              }
              printf("%d\n",sol);
}
                 
//system("pause");
return 0;
}
