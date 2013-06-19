#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
 int test,n,m,ans;
 cin>>test;
 while(test--)
 {             cin>>n>>m;
             if(n==0 && m==0)
               printf("1\n");
             else
               if(n==0 || m==0)
                  printf("0\n");
             else
             {
                if(((n-m)&((m-1)/2))==0)
                  printf("1\n");
                else
                  printf("0\n");
                  }
              
}
return 0;
}
