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

# define INF (1<<30)
# define PI 3.14159265

vector<string> dic;
map<string,int> mp;

struct node {
       int found;
       int prefix;
       int small1;
       int small2;
       node *child[26];
};

node* initialize() {
      node* temp=(node*)malloc(sizeof(node));
      temp->found=0;
      temp->prefix=0;
      temp->small1=INF;
      temp->small2=INF;
      for(int i=0;i<26;i++) temp->child[i]=NULL;
      return temp;
}

void addwords(node* vertex,string &str,int pos,int order) {
     
     if(pos==-1) {
                 vertex->prefix++;
                 vertex->found=1;
                 
                 if((vertex->small1)>order) { vertex->small2=vertex->small1; vertex->small1=order; }
                 else if((vertex->small2)>order) vertex->small2=order;
                 
     }
     
     else {
                 vertex->prefix++;
                 
                 if((vertex->small1)>order) { vertex->small2=vertex->small1; vertex->small1=order; }
                 else if((vertex->small2)>order) vertex->small2=order;
                 
                 int k=str[pos]-'a';
                 if(vertex->child[k]==NULL) vertex->child[k]=initialize();
                 addwords(vertex->child[k],str,pos-1,order);
     }
     
}

node* findword(node *vertex,string& str,int pos,int flag) {
      
      if(pos<0) return vertex;
      
      int k=str[pos]-'a';
      if(vertex->child[k]!=NULL && vertex->child[k]->prefix>=flag) 
                 return findword(vertex->child[k],str,pos-1,flag);
      else return vertex;
      
}

int main() {
    int len,i;
    string str;
    while(getline(cin,str)) {
           len=str.length();
           if(!len || str[0]==' ') break;
           dic.push_back(str);
    }
    
    sort(dic.begin(),dic.end());
    
    len=dic.size();
    
    node* root=initialize();
    for(i=0;i<len;i++) {
            addwords(root,dic[i],dic[i].length()-1,i);
            mp[dic[i]]=i+1;
            //cout<<"added"<<endl;
    }
    
    //cout<<"dsdsdsds";
    
    while(getline(cin,str)) {
          len=str.length();
          
          int flag=1,order=INF;
          
          if(mp[str])  { flag=2; order=mp[str]-1; }
          
          node*f=findword(root,str,len-1,flag);
          
          if((f->small1)!=order)
          cout<<dic[f->small1]<<endl;
          else  cout<<dic[f->small2]<<endl; 
    }
    return 0;
    
}        
                            
                     
      
                 
                 
                 
                 
                 
