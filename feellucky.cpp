#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
      int test,count=1,n;
      cin>>test;
      string s;
      
      while(test--)
      {   vector< vector<string>  > v  (100);
          for(int i=0;i<10;i++)
          {
          cin>>s;
          cin>>n;
          v[n-1].push_back(s);
          }
          printf("Case #%d:\n",count++);
          for(int i=99;i>0;i--)
          {       
                  if(!(v[i].empty()))
                  {
                     for(int j=0;j<v[i].size();j++)
                     cout<<v[i][j]<<endl;
                     break;
                  }
          }
         
         
                
      }
      return 0;
      }
           
