#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define LL long long
#define MAX 10000000
using namespace std;
char text[MAX];
char pattern[MAX];
int prefix[MAX];
int len1,len2;

void pre_fn()
{
     prefix[1]=0;
     int k=0;
     for(int q=2;q<=len1;q++)
     {
             while(k>0 && (pattern[q-1]!=pattern[k]))
             {     k=prefix[k-1]; }
             
             if(pattern[q-1]==pattern[k])
             k++;
             
             prefix[q]=k;
     }
    /* for(int i=1;i<=len1;i++)
     cout<<prefix[i]<<" ";
     cout<<endl;*/
}

void matcher()
{
   //  bool flag=true;
     len2=strlen(text);
     int k=0;
     for(int i=1;i<=len2;i++)
     {
             while(k>0 && pattern[k]!=text[i-1])
             k=prefix[k];
             
             if(pattern[k]==text[i-1])
             k++;
             if(k==len1)
             {  printf("%d\n",i-len1);
               // flag=false;
                k=prefix[k];
             }
     }
    // if(flag)
     //printf("\n");
}
     
     
int main(){
while(scanf("%d",&len1)!=EOF)
{
   scanf("%s%s",pattern,text);
   pre_fn();
   matcher();
   printf("\n");
}

return 0;
}
