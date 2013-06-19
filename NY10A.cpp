#include<iostream>
#include<cstdio>
using namespace std;
int f(char c)
{
    if(c=='T')
    return 0;
    return 1;
}
int main(){
    
    int test,n;
    scanf("%d",&test);
    while(test--)
    {
                 
                 scanf("%d",&n);
                 char arr[41];
                 int count[8]={0} ;
                 scanf("%s",arr);
                 int x;
                 for(int i=0;i<38;i++)
                 {
                       
                      x=4*f(arr[i])+2*f(arr[i+1])+f(arr[i+2]);
                      count[x]++;
                       
                 }
                    printf("%d ",n);
                    for(int i=0;i<7;i++)
                    printf("%d ",count[i]);
                    printf("%d\n",count[7]);
    }
    return 0;
}
                            
                        
