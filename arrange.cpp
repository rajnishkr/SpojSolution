#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
    int test;
    cin>>test;
    while(test--)
    {
                 int n,temp,c1=0;
                 cin>>n;
                 vector <int> v2;
                 v2.clear();
                 for(int i=0;i<n;i++)
                 {
                     cin>>temp;
                     if(temp==1 ) 
                     c1++  ;
                     else
                     {
                         if(temp==3)
                         v2.push_back(-1);
                         else
                         v2.push_back(temp);
                     }
                 }
                 
                  if(v2.empty()==0)
                sort(v2.begin(),v2.end());
                  
                  if(c1!=0)
                  {
                           while(c1!=1)
                           {
                                       cout<<1<<" ";
                                       c1--;
                           }
                           cout<<1;
                           for(int i=v2.size()-1;i>=0;i--)
                           {
                                   if(v2[i]==-1)
                                   cout<<" "<<'3';
                                   else
                                   cout<<" "<<v2[i];
                           }
                           cout<<endl;
                  }
                  else
                  {     
                        cout<<v2[v2.size()-1];
                        for(int i=v2.size()-2;i>=0;i--)
                           {
                                   if(v2[i]==-1)
                                   cout<<" "<<'3';
                                   else
                                   cout<<" "<<v2[i];
                           }
                           cout<<endl;
                           
                  }
                
    }
           
    return 0;
}
                  
                  
                 
                   
