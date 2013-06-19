#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
    int test;
    cin>>test;
    string s;
    while(test--)
    {
                 
                 scanf("%s\0",&s);
                // cin>>s;
                 map<string,int> m;
                 int l=s.length();
                 for(int i=0;i<l;i++)
                 m[s.substr(i)]=1;
                 
                 map<string,int> :: iterator it,it1;
                 int lcp[l];
                 
                 it=m.begin();
                 string s1=(*it).first;
                 int sum=s1.length();
                 ++it;
                 int i;
                 for( i=1,it1=m.begin();i<l;++it,i++,++it1)
                 {        int j=0;
                         while((*it).first[j]==((*it1).first[j]))
                         j++;
                         s1=(*it).first;
                         sum+=s1.length()-j;
                 }
                 printf("%d\n",sum);
    }
    return 0;
}
