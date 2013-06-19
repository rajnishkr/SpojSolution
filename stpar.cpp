#include<vector>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<stack>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n){
             vector<int> road;
             vector<int> stk;
             int a[n];
             stk.clear();
             road.clear();
              int count=0,count1=0,k=1,e=1;
              for(int i=0;i<n;i++)
              cin>>a[i];
             if(a[0]==1)
                       road.push_back(a[0]);
              else
                      { stk.push_back(a[0]);
                        count=-1;
                        }
             for(int i=1;i<n;i++)
             {
                    
                     
                     if(a[i]==count+2)
                         { road.push_back(a[i]);
                          count++;
                          }
                     else  
                         {
                          if(stk.empty())
                              {stk.push_back(a[i]) ;
                                e=0;
                                }
                         
                          while(stk[count1]==count+2)
                           {  road.push_back(stk[count1]);
                              count++;
                              stk.pop_back();
                              count1--;
                           }
                              
                             
                           if(a[i]>stk[count1])
                          { cout<<"no\n";
                             k=0 ;
                            break;
                          }
                              if(e)
                              { stk.push_back(a[i]) ;
                              count1++;
                              }
                              e=1;
                    }
             }
             if(k)
             cout<<"yes\n";
             cin>>n;
             }
             return 0;
             }
                   
