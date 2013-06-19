#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n,index1,index2;;
     double sum=10000000,disx,disy,sum1,sum2;
     
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++)
        {scanf("%d",&x[i]);
          scanf("%d",&y[i]);
          }
    for(int i=0;i<n;i++)
    {
            for(int j=i+1;j<n;j++)
            {
                    disx= abs(x[i]-x[j]) ;
                    disy= abs(y[i]-y[j]) ;
                   sum1=pow(disx,2.0)+pow(disy,2.0);
                   sum2= sqrt(sum1);
                  if(sum2<sum) 
                  {
                     sum =sum2;
                     index1=i;
                     index2=j;
                  }
            } 
    }
   printf("%d %d %.6f\n",index1,index2,sum);
    system("pause");
    return 0;
}      
        
