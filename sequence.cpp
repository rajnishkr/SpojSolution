#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0]);
    int sum=0,m=arr[0];
    for(int i=1;i<n;i++)
    {
            scanf("%d",&arr[i]);
             m=max(m,arr[i]);;
            sum=sum+m;
            }
            cout<<sum<<endl;
             cin>>n;
            return 0;
            }
            
