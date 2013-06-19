#include<iostream>

using namespace std;

int main(){
    
    int test,d,n,m;
    scanf("%d",&test);
    while(test--){
    int h;              
    scanf("%d%d%d",&n,&m,&d);
    int count=0,flag;
    for(int i=0;i<n;i++)
    {         
             scanf("%d",&h);
            if(h>d)
            {   count++;
                h=h-d;
                while(h>d)
                {
                          count++;
                          if(count>=m)
                          {          
                                      break;
                          }
                          h=h-d;
                }
                }
    }
    if(count>=m)
    printf("YES\n");
    else
    printf("NO\n");
    }
    return 0;
}
                   
    
