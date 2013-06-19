using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>

# define PI 3.14159265

vector<int> adj[26];
int present[26];
int indeg[26];
int outdeg[26];
int clos,res;

int prop() {
    int i,cnt;
    
    for(i=0;i<26;i++) {
          if(abs(indeg[i]-outdeg[i])>=2)  return 0; 
    }
    
    int flag=1;
    for(i=0;i<26;i++) {
            if(indeg[i]!=outdeg[i]) { flag=0; break; }
    }
    if(flag) { clos=1; return 1; }
    
    cnt=0;
    for(i=0;i<26;i++) {
           if(indeg[i]>outdeg[i]) cnt++;
    }
    if(cnt!=1) return 0;
    
    cnt=0;
    for(i=0;i<26;i++) {
           if(indeg[i]<outdeg[i]) cnt++;
    }
    if(cnt!=1) return 0;
    
    return 1;
}


int euler() {
     int i,len,n,vis[26],v1,v2;

     clos=0;
     
     res=prop();

     if(!res) return 0;
     
     if(clos) {
         for(i=0;i<26;i++) {
               if(present[i]) { n=i; break; }
         }
     }
         
     else {
          for(i=0;i<26;i++) {
               if(present[i] && outdeg[i]==indeg[i]+1) { n=i; break; }
          }
     }                               
     
     for(i=0;i<26;i++) vis[i]=0; 
                             
     queue<int> q;
     q.push(n);
     vis[n]=1;
     
     while(!q.empty()) {
           v1=q.front();
           q.pop();
           len=adj[v1].size();
           
           for(i=0;i<len;i++) {
                  v2=adj[v1][i];
                  if(vis[v2]==0) { q.push(v2); vis[v2]=1; }
           }
     }
                   
     for(i=0;i<26;i++) {
            if(present[i] && !vis[i]) return 0;
     }           
     
     return 1;
}
              
              
    
int main() {
    int i,t,n,ind1,ind2;
    char str[1111];
    cin>>t;
    while(t--) {
         
         for(i=0;i<26;i++) {
                 adj[i].clear();
                 present[i]=0;
                 indeg[i]=0;
                 outdeg[i]=0;
         }
         
         cin>>n;
         
         
         for(i=0;i<n;i++) {
               cin>>str;
               int len=strlen(str);
               ind1=str[0]-'a';
               ind2=str[len-1]-'a';
               adj[ind1].push_back(ind2);
               present[ind1]=1;
               present[ind2]=1;
               indeg[ind2]++;
               outdeg[ind1]++;
         }                       
         
                
         if(euler()) cout<<"Ordering is possible."<<endl;
         else cout<<"The door cannot be opened."<<endl;
    }
    return 0;
}
    
           
    
