#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main(){
    int test;
    scanf("%d", &test);
    while(test--)
    {
      long long a;
      scanf("%lld", &a);
      long long i=(long long)pow((double)a,0.5),j=0;
               while(1){
                        if(j*j>a)
                        {
                          cout<<"No\n";
                          break;
                        }
                        else
                        {
                            if((i*i+j*j)==a)
                            {cout<<"Yes\n";
                            break;
                            }
                            else {
                                 if((i*i+j*j)<a)
                                 j++;
                                 else
                                 i--;
                                 }
                        }
                  }
      
      }
      return 0;
    }     
           
