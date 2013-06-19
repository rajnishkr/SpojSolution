#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
    
    int i,j;
    int test;
    scanf("%d",&test);
    scanf("%d",&i);
    while(--test){
                  scanf("%d",&j);
                  i=i^j;
                  if(i!=j)
                  {    printf("%d",i);
                          }
                  }
                  printf("%d",i);
                system("pause");
                  return 0;
                  }
                   
