#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>

using namespace std;
int arr[500002];
int sol[500002];
int main(){
    
       int n,max=0,pos,max1=0,pos1;
       vector<int> v;
       scanf("%d",&n);
       for(int i=1;i<=n;i++)
       {
               scanf("%d",&arr[i]);
               if(arr[i]>max)
               {
                             max1=max;
                             pos1=pos;
                             max=arr[i];
                             pos=i;
                             v.clear();
                             v.push_back(i);
               }
               else
               {  
                    if(arr[i]==max)
                    v.push_back(i);
                   if(arr[i]>max1)
                      {
                              max1=arr[i];
                              pos1=i;
                    }     
               }
       }
       int ans1,ans2;
       for(int i=1;i<=n;i++)
       {
               if(i==pos)
               {
                         ans1=max1-max+sqrt((float)abs(pos-pos1));
                         if(i>n/2)
                         ans2=arr[1]-max+sqrt(i);
                         else
                          ans2=arr[n]-max+ceil(sqrt(n-i));
                         cout<<ans1<<ans2<<endl;
               }
       }
                         
       for(int i=0;i<v.size();i++)
       cout<<arr[v[i]]<<"  "<<v[i]<<" ";        
      // cout<<max<<" "<<pos<<endl;
     // cout<<max1<<" "<<pos1<<endl;
       cin>>max;
       
       
       
       
       
       
       return 0;
       }
               
