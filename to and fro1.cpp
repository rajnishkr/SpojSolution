#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    string str;  
    while(n)
    {       
            getline(cin,str);
            getline(cin,str);
            int size=str.size()/n;
            int n1=2*n-1;
            int count=0;
              for(int i=1;i<=n;i++)
                {          int p=0;
                           int sum=i;
                          cout<<str[sum-1];
                       for(int j=0;j<size-1;j++)
                       {
                              if(p)
                              {   sum+=2*n-n1;
                                   p=0;
                               }
                               else
                               {
                                  sum+=n1;
                                  p=1;
                               }
                               cout<<str[sum-1];
                       } 
                       n1=n1-2;
                }     
                   cout<<endl;
                 scanf("%d",&n);
                
   }
   return 0;
}                   
                               
                                    
            
