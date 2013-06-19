#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
int main(){
   string s="Ducky",s1,p=" ";
    int test;
    cin>>test;
    getchar();
    while(test--)
    {
                 
                 int flag=true;
                 int j=-1,i=0;
                 getline(cin,s1);
                 while( flag)
                 {          j++;
                           if(j>=s1.length())
                           break;
                           if(s1[j]!='.')
                            {
                             p[0]=s1[j];
                            if(s.find(p)==-1)
                            flag=false;
                            else
                            i++;
                            }
                
                // cout<<i<<endl;
                 }
                 if(flag &&i==5)
                 cout<<"DUCKY IS HERE!\n";
                 else
                 cout<<"NO DUCKY!\n";
    }
return 0;
}
