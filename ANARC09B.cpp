#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int m,n,l,w;
    cin>>m>>n;
    while(m)
    {
     l=m;
     w=n;
     while(1)
     {       // cout<<l<<" "<<w<<endl;
             if(l==w)
              break;
             else
             {
                 if(l<w)
                  l=l+m;
                 else
                  w=w+n;
             }
     }
             int c,c1;
             c=l/m;
             c1=w/n;
             cout<<c*c1<<endl;
             cin>>m>>n;
             
             }
          return 0;
    
  }
                  
       
     
