#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
                 string arr;
                 cin>>arr;
                 int len=arr.length();
                  bool flag=false;
                 if(len==1 && arr[0]=='1')
                 {flag=true;
                 }
                 else if(len==1 && arr[0]=='2')
                 flag=false;
                 else
                 {    char c=arr[len-1];
                     int n=(c-'0');
                     int y;
                    if(n%2==0)
                     y=(n*n)/2;
                     else
                     y=(n*n+1)/2;
                     if(y%2==0)
                     flag=false;
                     else
                     flag=true;
                 }
                 if(flag)
                 printf("Dexter\n");
                 else
                 printf("Mandark\n");
    }

return 0;
}
