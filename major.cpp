#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
                 map<int,int> m1;
                 int n;
                 scanf("%d",&n);
                 int arr[n];
                 int max=0,k;
                 for(int i=0;i<n;i++)
                 { scanf("%d",&arr[i]);
                   if(m1.count(arr[i]))
                     m1[arr[i]]++;
                     else
                    m1[arr[i]]=1;
                     if(max<m1[arr[i]])
                    { max=m1[arr[i]];
                      k=arr[i];
                    }
                 }
                 if(max>n/2)
                 cout<<"YES"<<" "<<k<<endl;
                 else
                 cout<<"NO\n";
         }
         return 0;
         }
                     
                                  
                 
                 
