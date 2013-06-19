#include<iostream>
#include<cstdio>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    string a;
    scanf("%s",&a);
    string s="ABCD";
    int m=2*n+1;
    char b[m];
    int in=s.find(a[0]);
    if(n!=3)
    b[0]=s[in+1];
    else
    b[0]=s[in-1];
    getch();
    return 0;
    
}
    
