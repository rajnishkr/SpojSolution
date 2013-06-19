#include<iostream>
#include<cstring>
#include<cstdio>
#include<map>

using namespace std;

int main(){
    int n,mm;
    scanf("%d%d",&n,&mm);
    while(n!=0 && mm!=0)
    {
    map< string ,int > m;
    int k[n];
    for(int i=0;i<n;i++)
    {
            string s;
            cin>>s;
            if(m.count(s))
               m[s]++;
            else
               m[s]=1;
             k[i]=0;
    }
    
     map<string,int>::iterator it;
     for ( it=m.begin() ; it != m.end(); it++ )
         k[(*it).second-1]++;
     for(int i=0;i<n;i++)
     cout<<k[i]<<endl;
     scanf("%d%d",&n,&mm);
     m.clear();
     }
     return 0;
     }
            
    
