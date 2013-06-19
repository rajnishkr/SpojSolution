#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
    
    int test;
    cin>>test;
    while(test--){
                  map<string,int> m1;
                  string a,b;
                  int m,n;
                  for(int i=0;i<16;i++)
                  {
                          
                          cin>>a>>b;
                          cin>>m>>n;
                          if(m>n)
                          {      if(m1[a]!=2)
                                 m1[a]=1;
                                 m1[b]=2;
                          }
                          else
                          {
                              if(m==n)
                              {
                                      if(m1[a]!=2)
                                      m1[a]=1;
                                      if(m1[b]!=2)
                                      m1[b]=1;
                              }
                              else
                              {
                                  if(m1[b]!=2)
                                  m1[b]=1;
                                  m1[a]=2;
                              }
                        }
                  }
                  map<string,int> :: iterator it;
                  for(it=m1.begin();it!=m1.end();it++)
                  {
                    if((*it).second==1)
                    {
                                       cout<<(*it).first<<endl;
                                       break;
                                       
                    }
                  }
    }

    return 0;
}
                                                          
                         
                              
                              
                  
