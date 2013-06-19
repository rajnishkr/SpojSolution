#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define LL long long
using namespace std;
char s[100002];
int pre[100002],pre1[100002];
void prefix()
{
     int k=0,j;
     int len=strlen(s);
     pre[1]=0;
     j=len;
     for(int i=2;i<=len;i++)
     {
             while(k>0 && s[len-i]!=s[len-1-k])
             k=pre[k];
             
             if(s[len-i]==s[len-1-k])
             k++;
             pre[i]=k;
             
     }
    /* for(int i=1;i<=len;i++)
     cout<<pre[i]<<" ";
     cout<<endl<<"x";*/
     return ;
}
             
void matcher ()
{
     int k=0,len=strlen(s);
     for(int q=1;q<=len;q++)
     {
        while(k>0 && s[q-1]!=s[len-k-1])
        k=pre[k];
        if(s[q-1]==s[len-k-1])
        k++;
        
     }     
         //  cout<<k<<endl;;
           printf("%s",s);
           for(int i=len-1-k;i>=0;i--)
           printf("%c",s[i]);
           printf("\n");
           return ;
}
int main(){
  while(scanf("%s",s)!=EOF) 
  {
      prefix();
      matcher();
  }
return 0;
}
