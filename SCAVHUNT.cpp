#include<iostream>
#include<map>
#include<vector>
#include<cstdio>

using namespace std;

int main(){
    
    int test,k=1;
    cin>>test;
    while(test--)
    {
                 int n;
                 cin>>n;
                 map<string ,string> m;
                 map<string,int> m1;
                 int arr[334]={0};
                 for(int i=1;i<n;i++)
                 {
                         string a,b;
                         cin>>a>>b;
                         m[a]=b;
                         m1[a]++;
                         m1[b]++;
                    
                 }
                map<string,int> ::iterator it;
                string s;
                for(it=m1.begin();it!=m1.end();it++)
                {
                                                    if((*it).second==1)
                                                    {
                                                         s=(*it).first;
                                                         if(m.count(s))
                                                         break;
                                                    }
                }
                cout<<"Scenario #"<<k++<<":\n";
                cout<<s<<endl;
                for(int i=1;i<n;i++) 
                {
                        s=m[s];
                        cout<<s<<endl;
                }
                cout<<endl;
        }
        return 0;
        }
                              
                         
                 
                 
