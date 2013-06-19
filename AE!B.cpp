#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k,s,e,i;
    cin>>n>>k>>s;
   
    int sum=k*s,sum1=0;
    vector<int> a;
    for(i=0;i<n;i++)
     {cin>>e;
     a.push_back(e);
     }
      sort (a.begin(), a.end());
      vector<int>::iterator it;
      for( i=0,it=a.end()-1;it>=a.begin();--it,i++)
      {// cout <<*it<<endl;
            sum1+=*it;
      if(sum1>=sum)
      {
       cout<<i+1;
       
       return 0;
       }
       }
       //system("pause");
       return 0;
       }
        
        
    
    
