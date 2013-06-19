#include<iostream>
#include<cstdio>

using namespace std;

int main(){                                                     
    
    int n,k;
    scanf("%d%d",&n,&k);
    while(n!=0 && k!=0){ 
               int j=0;
               for(int i=2;i<=n;i++)
                {       if(j<=n)
                       j=(k+j);
                       else
                       {       
                           j=j%n;
                       
                           }
                    cout<<j<<endl;
                }
               printf("%d %d %d\n",n,k,j%n); 
               scanf("%d%d",&n,&k);
               }
               return 0;
               }
               
               
