#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int n,k,a;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
            cin>>a;
            v.push_back(a);
    }
    sort(v.begin(),v.end());
    int count=0,j=1;
    for(int i=0;i<n;)
    {
            int diff=v[j]-v[i];
            if(diff==k)
            {count++;
              i++;
              j=i+1;
            }
            else
            {
                if(diff>k)
                {i++;
                 j=i+1;
                 }
                else {
                     if(j<n)
                     j++;
                     else
                     {
                         i++;
                         j=i+1; 
                     }
                     
                     }
                }
    }
    cout<<count<<endl;
  // system("pause");
    return 0;
}      
                
