#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>

using namespace std;
int main()
{
      int test;
      cin>>test;
      float f,n,sum;
      while(test--)
      {
       cin>>f;
       sum=0;
       for(int i=1;i<=f;i++)
        sum+=f/i;
        printf("%.2f\n",sum);
        }
        return 0;
        }
