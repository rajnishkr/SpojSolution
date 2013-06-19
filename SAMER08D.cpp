#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define LL long long
using namespace std;
int lcs[1007][1007],sub[1007][1007];
char input1[1007],input2[1007];
int main(){
    int k,n,m,y,len;
    /* for(int i=0;i<=1002;i++)
    {
       lcs[i][0]=0;
       lcs[0][i]=0;
       sub[i][0]=0;
       sub[0][i]=0;
    } */
    while(1)
    {
    scanf("%d",&k);
    if(k==0)
    break;
    
    scanf("%s%s",&input1,&input2);
     n=strlen(input1);
     m=strlen(input2);
    for(int i=1;i<=n;i++)
    {
            for(int j=1;j<=m;j++)
            {        int &x=lcs[i][j];
                    if(input1[i-1]==input2[j-1])
                    sub[i][j]=sub[i-1][j-1]+1;
                    else
                    sub[i][j]=0;
                    x=max(lcs[i-1][j],lcs[i][j-1]);
                    if(sub[i][j]>=k)
                    {
                     y=x,len=sub[i][j];
                    for(int l=k;l<=len;l++)
                    y=max(y,lcs[i-l][j-l]+l);
                    x=y;
                    }
            }
    }
    printf("%d\n",lcs[n][m]);
}
return 0;
}
