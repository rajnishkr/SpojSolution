#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;                                                                                        
int main(){
    int test;
    cin>>test;
    while(test--)
    {
      int size,a;
      cin>>size;
      vector<int> vec;
      vector<int> v1;
      v1.clear();
      vec.clear();
       for(int i=0;i<size;i++)
       {
               cin>>a;
               vec.push_back(a);
       }
       sort(vec.begin(),vec.end());
       a=vec[0];
       int sum=a,count;
       for(int i=1;i<size;i++)
       {      count=0;
             if(vec[i]==a)
             sum+=vec[i]; 
             else
             {    count=1;
                 v1.push_back(sum);
                 sum=vec[i];
                 a=vec[i];
                 
             }
       }
       if(!count)
       v1.push_back(sum);

              sort(v1.begin(),v1.end());
         if(v1[v1.size()-1]>vec[size-1])
         cout<<v1[v1.size()-1]<<endl;
         else
         cout<<vec[size-1]<<endl;
         }   
           return 0;
           } 
