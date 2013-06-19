#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<map>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n)
    {       vector<int> vec;
            vec.clear();
            string s;
            getline(cin,s);
            getline(cin,s);
            map<char,int> m;
            int start=0,j=0,size=0;
            for(int i=0;i<s.size();i++)
            {
                    if(j>(s.size()-1))
                    break;
                     while(m.size()!=(n+1))
                     {      if(j>(s.size()-1))
                            break;
                            cout<<s[j];              
                           if(m.count(s[j]))
                           m[s[j]]++;
                           else
                           m[s[j]]=1;
                           j++;
                           size++; 
                           
                    }
                    cout<<endl;
                    //cout<<m.size()<<" "<<j<<endl;
                    //cout<<size<<endl;
                    vec.push_back(size-1);
                    cout<<size-1<<endl;
                    size--;
                    if(m[s[start]]==1)
                    {m.erase(s[start]);
                      // cout<<m.size()<<endl;
                      //cout<<s[start]<<endl;
                      start++;
                      
                      }
                    else
                    m[s[start]]--;
                    map<char,int> :: iterator it;
                    for( it=m.begin();it!=m.end();++it)
                    cout<<(*it).first<<" "<<(*it).second<<" ";
                     cout<<endl;
            }
            sort(vec.begin(),vec.end());
            cout<<vec[vec.size()-1]<<endl;
            
          }
           
      return 0;      
    }
    

            
                            
                                           
                      
            
            
