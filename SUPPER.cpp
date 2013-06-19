#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
vector<int> v[100001];
vector<int> pos[100001];
int arr[100001];

int main(){
    int test=10;
    while(test--)
    {            
                 int n,x,m=0;
                 scanf("%d",&n);
                 for(int i=0;i<=n;i++)
                 {v[i].clear();
                  pos[i].clear();
                 }
                 for(int i=0;i<n;i++)
                 {              
                         scanf("%d",&x);
                         arr[i]=x;
                         int j=0;
                         while(v[j].size()!=0 )
                         {
                         if(v[j][v[j].size()-1]<x)
                         j++;
                         else
                         break;
                         }
                         if(j!=0)
                         pos[j].push_back(v[j-1].size());
                         v[j].push_back(x);
                         if(m<j)
                         m=j;
                 }
                 set<int> s;
                 for(int i=0;i<v[m].size();i++)
                 s.insert(v[m][i]);
                  if(m!=0){
                 int k=pos[m][pos[m].size()-1];
                 for(int i=m;i>=1;i--)
                 {
                         for(int j=0;j<k;j++)
                         s.insert(v[i-1][j]);
                         if(i!=1)
                         k=pos[i-1][k-1];
                 }
                 }
    
                  set<int> ::iterator it,it1;
                  it1=s.end();
                  it1--;
                  cout<<s.size()<<endl;
                  for(it=s.begin();it!=it1;it++)
                  cout<<(*it)<<" ";
                  cout<<(*it)<<endl;
    }

return 0;
}
