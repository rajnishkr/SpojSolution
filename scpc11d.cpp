#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(a!=0)
    {   int hyp,per,base;
    
       if(a>b && a>c)
       {hyp=a;
        per=b;
        base=c;
        }
       else
       {
           if(b>c)
           {
                  hyp=b;
                  per=a;
                  base=c;
           }
           else
           {
               hyp=c;
               per=b;
               base=a;
               
           }
       }
       if((hyp*hyp)==((base*base)+(per*per)))
       printf("right\n");
       else
       printf("wrong\n");
       scanf("%d%d%d",&a,&b,&c);
       }
return 0;

}
