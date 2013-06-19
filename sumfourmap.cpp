#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
using namespace std; 
//int a[16000004];
//int b[16000004];
int main(){
    int arr1[4003],arr2[4003],arr3[4003],arr4[4003],n;
    scanf("%d",&n);
    map<int,int> a,b;
    for(int i=0;i<n;i++)
    scanf("%d%d%d%d",&arr1[i],&arr2[i],&arr3[i],&arr4[i]);
    
    int len=0;
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    a[arr1[i]+arr2[j]]++;
                    b[arr3[i]+arr4[j]]++;
            }
    }
    map<int,int> ::iterator it; 
    int t=0;
    for(it=a.begin();it!=a.end();it++)
    {
        t+=(*it).second*b[-((*it).first)];
    }
                                      
    printf("%d",t);
    cin>>t;
  
return 0;
}
