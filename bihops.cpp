#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    string a;
    
    while(cin>>a)
    {             int k=0,z=1;;
                  int j;
                  char s[a.size()+2],c;
                  if(a=="0")
                  {
                            cout<<0<<endl;
                            continue;
                  }
                  if(a=="1")
                  {
                            cout<<1<<endl;
                            continue;
                  }
                 for(int i=a.size()-1;i>=0;i--)
                 {         
                         j=2*(a[i]-'0')+k;
                       //  cout<<j<<" "<<a[i]<<endl;
                         if(j>9)
                         {k=1;
                         j=j%10;
                         }
                         else
                         k=0;
                         s[i+1]=j+'0';
                         
                 }
                 if(k==1)
                  s[0]=1+'0';
                  else
                   s[0]=0+'0';
                 s[a.size()+1]='\0';
                 
                // cout<<s<<endl;
                 j=s[a.size()]-'0';
                 if(j<2)
                 {
                 j=10+j-2;
                 s[a.size()]=j+'0';
                 int m=a.size()-1,b=9;
                 j=s[m]-'0';
                 while(j==0 )
                 {  s[m]=b+'0';
                 //cout<<s[m]<<endl;
                      m--;
                     j=s[m]-'0';
                  
                 }
                // cout<<s<<endl;
                 if(m==0 && j==1)
                 z=2;
                
                 j--;
                 s[m]=j+'0';
                 //cout<<s<<endl;
                 if(s[0]=='0')
                 {k=0;
                 z=1;
                 }
                 }
                 else
                  {
                                     j=j-2;
                                     s[a.size()]=j+'0';
                  }
                  
                  if(k==1)
                  {
                        
                         cout<<s<<endl;
                  }
                  else
                  {
                      for(int i=z;i<a.size()+1;i++)
                      cout<<s[i];
                      cout<<endl;
                  }
    }
    return 0;
}
                 
                         
