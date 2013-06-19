#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<stdlib.h>

using namespace std;
int main(){
     string a;
    while(cin>>a)
    { 
      long long seed=0,sum=0;
      int j=0,k=0;             
      for(int i = a.size()-8 ; i>a.size()-14 ; i--)
      {
           j=a[i]-'0';
           seed=seed+j*(long long )pow(10.0,k++);
      }
      long long y=seed/1000;
      long long x=(seed%1000)*1000+y;
      sum=(991036+x)%1000000;
      string s="";
      while(sum!=0)
      {
        k=sum%10;
        char c=k+'0';
        s.insert(0,1,c);
        sum/=10;
        }
        char c=0+'0';
        while(s.size()!=6)
        { s.insert(0,1,c);
        }
      int a1=0,b=0;
      for(int i=a.size()-7,k=0;i<a.size()-1;i++,k++)
      {    
           for(j=0;j<s.size();j++)
           {
              if(a[i]==s[j])
                 {
                 if(k==j)
                 a1++;
                 else
                 b++;
                 }
      }         
      }
      printf("#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<stdlib.h>

using namespace std;
int main(){
     string a;
    while(cin>>a)
    { 
      long long seed=0,sum=0;
      int j=0,k=0;             
      for(int i = a.size()-8 ; i>a.size()-14 ; i--)
      {
           j=a[i]-'0';
           seed=seed+j*(long long )pow(10.0,k++);
      }
      long long y=seed/1000;
      long long x=(seed%1000)*1000+y;
      sum=(991036+x)%1000000;
      string s="";
      while(sum!=0)
      {
        k=sum%10;
        char c=k+'0';
        s.insert(0,1,c);
        sum/=10;
        }
        char c=0+'0';
        while(s.size()!=6)
        { s.insert(0,1,c);
        }
      int a1=0,b=0;
      for(int i=a.size()-7,k=0;i<a.size()-1;i++,k++)
      {    
           for(j=0;j<s.size();j++)
           {
              if(a[i]==s[j])
                 {
                 if(k==j)
                 a1++;
                 else
                 b++;
                 }
      }         
      }
      printf("%lldA%lldB\n",a1,b);
      }
    return 0;
}
    
")
      }
    return 0;
}
    
