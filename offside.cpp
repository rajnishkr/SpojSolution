#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
        int a,d,c;
        cin>>a>>d;
        
        while(a && d)
        {
        int att[a],def[d];
          for(int i=0;i<a;i++)
              cin>>att[i];
          for(int i=0;i<d;i++)
              cin>>def[i];
          sort(att,att+a);
          sort(def,def+d);
        /*  for(int i=0;i<a;i++)
              cout<<att[i]<<endl;
          for(int i=0;i<d;i++)
               cout<<def[i]<<endl;*/ 
          if(att[0]<def[1])   
           cout<<"Y\n";
          else{
              
                     cout<<"N\n";
                    
               }
               cin>>a>>d;
          }
          return 0;
          }
                 
