#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int test,count=1;
    cin>>test;
    while(test--)
    {
          float f,sum;       
          string s;
          cin>>f>>s;
          if(s=="kg")
            {
                     sum=f*2.2046;
                     printf("%d %.4f lb\n",count++,sum);
            }
            else
            {
                if(s=="l")
                {
                    
                     sum=f*0.2642;
                     printf("%d %.4f g\n",count++,sum);      
                }
                else
                {
                    if(s=="lb")
                    {
                        
                     sum=f*0.4536;
                     printf("%d %.4f kg\n",count++,sum);  
                     }
                     else
                     {
                       sum=f*3.7854;
                     printf("%d %.4f l\n",count++,sum);   
                     }
                }
            }
    }             
    system("pause");
    return 0;
}            
