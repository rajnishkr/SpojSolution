#include<iostream>
#include<cstring>
#include<cstdio>
#include<map>

using namespace std;
long long fact(int n)
{
     long long f=1;
     for(int i=1;i<=n;i++)
      f=f*i;
      return f;
      }
int main(){
    int n,count=1;
    scanf("%d",&n);
    while(n--)
    {
    map< char ,int > m;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
            if(m.count(s[i]))
               m[s[i]]++;
            else
               m[s[i]]=1;    
    }
    long long m1=fact(s.size());
    map<char,int>::iterator it;
    for(it=m.begin();it!=m.end();++it)
    m1=m1/fact((*it).second);
    printf("Case %d: %lld\n",count++,m1);
    m.clear();
  }
  return 0;
}
