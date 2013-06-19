  using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#define pb push_back
#define ll long long

int  l1[4001];
int  l2[4001];
int  l3[4001];
int  l4[4001];

vector<int> v1;
vector<int> v2;

int main()
{
   int n,len1,len2,low,high,mid,left,right;
   int a,b,c,d;
   
   int count,search;
   
   cin>>n;
   for(int i=0;i<n;i++)
   {
            cin>>l1[i]>>l2[i]>>l3[i]>>l4[i];
   }
   
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
         v1.pb(l1[i]+l2[j]);
         v2.pb(l3[i]+l4[j]);
                     
    }
   
    sort(v1.begin(),v1.end());
   
    len2=v2.size();
    len1=v1.size();
   
    count=0;
   
    for(int i=0;i<len2;i++)
    {
        search=-1*v2[i];
        low=0;
        high=len1-1;
        while(low<=high)
        {
                       
                        mid=(low+high)/2;
                        if(v1[mid]==search)
                        {
                           right=mid;
                           while(v1[right]==search)
                           {
                               count++;
                               right++;      
                               if(right==len1)
                                break;            
                              // cout<<"in\n";
                               
                           }  
                          left=mid-1;
                          if(left>=0)
                           while(v1[left]==search)
                           {
                             count++;
                             left--;
                             if(left<0)
                               break;
                           }
                           break;            
                        }
                        else if(v1[mid]>search) high=mid-1;
                        else low=mid+1;
         //cout<<"out\n";
        }
        }    
        cout<<count;
        return 0;
        }
       
  
