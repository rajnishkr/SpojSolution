#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
#define max 99000005
using namespace std;
vector<int> dp(max);
int main(){
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<max;i++)
    dp[i]=(dp[i-1]+2)%i;
    char c[5];
    while(1)
    {    scanf("%s",&c);   
         if(c[0]=='0' && c[1]=='0') 
           break;
         double z=(int)(c[3]-'0');
         int i;
         i=((c[0]-'0')*10+(c[1]-'0'))*pow(10.0,z);
         printf("%d\n",dp[i]+1);
     
    }
    
return 0;
}
