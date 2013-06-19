#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
    long long a,b;
     int flag;
    cin>>a>>b;
    while(a!=0 && b!=0)
    {           vector<long long> v,v1;
                set<long long> s,s1;
                int a1,b1,l=1,l1=1;
                a1=a;
                b1=b;
                flag=0;
               while(1)
               {
                                if(s.count(a) && s1.count(b) )
                                break;
                                if(s1.count(a))
                                {
                                               flag=1;
                                               break;
                                }
                                if(s.count(b))
                                {
                                              flag=-1;
                                              break;
                                }
                                if(!s.count(a))
                                { 
                                s.insert(a);
                                v.push_back(a);
                                long long sum=0;
                                while(a!=0)
                                {
                                           sum+=(a%10)*(a%10);
                                           a=a/10;
                                }
                                a=sum;
                                }
                                if(s1.count(a))
                                {               l++;
                                               flag=1;
                                               break;
                                }
                                if(s.count(b))
                                {
                                               l1++;
                                              flag=-1;
                                              break;
                                }
                                if(!s1.count(b))
                                {  
                                s1.insert(b);
                                v1.push_back(b);
                                long long sum=0;
                                while(b!=0)
                                {
                                 sum+=(b%10)*(b%10);
                                 b=b/10;
                                                 
                                 }
                                 b=sum;
                                }
                                cout<<a<<" "<<b<<" ";
                                l++;
                                l1++;
               }
               
                if(flag!=0)
                {
                      if(flag==-1)
                       {
                        for(int i=0;i<v.size();i++)
                                if(v[i]!=b)
                                l1++;
                                else
                                break;
                        cout<<a1<<" "<<b1<<" "<<l1<<endl;
                       }
                       else
                       {
                       for(int i=0;i<v1.size();i++)
                                 if(v1[i]!=a)
                                 l++;
                                 else
                                break;
                       cout<<a1<<" "<<b1<<" "<<l<<endl;
                      }
                }
                else
                cout<<a1<<" "<<b1<<" "<<'0'<<endl;
               cin>>a>>b;
               
               
               
    }



return 0;
}
