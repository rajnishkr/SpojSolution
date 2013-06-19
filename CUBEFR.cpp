#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int n[1000000]={1};
int main(){
    

    int cube=8,c=0;
     n[1]=0;
   for(int i=2;i<=1000000;i++)
   {
           if(i==cube )
           {n[i]=-1;
            c++;
            int b=cube,k=2;
            while(k*b<=1000000)
            {
                n[k*b]=-1;
                k++;
            }              
            cube=pow(c+2,3.0);
            
            }
            
          
     }
     c=0;
     for(int i=0;i<=1000000;i++)
     {        
             if(n[i]!=-1)
             n[i]=c;
             else
             c++;
     }       
    int test,j=1;
    scanf("%d",&test);
    while(test--)
    {
      int a;
      scanf("%d",&a);
      if(n[a]==-1)
      printf("Case %d: Not Cube Free\n",j);
      else
      printf("Case %d: %d\n",j,a-n[a]);
      j++;
    }
    return 0;
}
      
