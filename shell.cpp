#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
   
    
    
    string target;        
    cin>>target;         
    int m,n;
    cin>>m;
    n=m;
    if( n == 10 ) 
   return 0;  
   
    char s1[6],s2[6];
    while(m--)
    {
         cin>>s1>>s2;
          string t;
         if(s1[0]==target[0])
         target=s2;
         else if (s2[0]==target[0])
         target=s1;
         //target=t;
         //cout<<target<<s1<<s2<<endl;
    }
 cout<<target<<endl;
         //system("pause");
  
  return 0;
}
    
    
