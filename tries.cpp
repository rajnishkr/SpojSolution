#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
struct node {
       bool flag;
       node *child[26];
       };
node* initi(){
     node*  temp=(node *) malloc(sizeof(node));
     temp->flag=0;      
     for(int i=0;i<26;i++)
     temp->child[i]=NULL ;
     return temp;
}
void add(node *vertex,string s,int pos)
{
              if(pos==-1)
              return;
              if(pos==0)
              vertex->found=true;
              int k=s[pos]-'a';
              if(vertex->child[k]==NULL)
              vertex->child[k]=initi();
              add(vertex->child[k],s,pos-1);
}

int main(){



return 0;
}
