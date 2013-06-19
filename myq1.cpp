#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
using namespace std;
int main(){
    int test;
    SS(test);
    while(test--)
    {
                 int n,row,col;
                 SS(n);
                 n--;
                 bool flag=false;
                 char dir,seat;
                 if(n==0)
                 flag=1;
                 else
                 {
                    row=ceil(n/5.0);
                    col=n%10;
                    if(col<=2 || col >=9 )
                    {
                     dir='L';
                     if(col==0 ||col==1)
                     seat='W';
                     else
                     seat='A';
                     }
                     else
                     {
                         dir='R';
                         if(col==3 || col==8)
                         seat='A';
                         else if(col==4 || col==7)
                         seat='M';
                         else
                         seat='W';
                     }
                 }
                 if(flag)
                 printf("poor conductor\n");
                 else
                 printf("%d %c %c\n",row,seat,dir);
}
                         
                     
                 
                     

//system("pause");
return 0;
}
