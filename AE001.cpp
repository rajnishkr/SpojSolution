#include <stdio.h>
#include<iostream>
using namespace std;
int solve(int n){
    int i, ans=0;
    for(i=1;n/i-i+1>0;ans+=n/i-i+1,i++);
    return ans;
}

int main(){
    
    int n;
   
    scanf("%d",&n);
    printf("%d\n",solve(n));
    
    return 0;
}
