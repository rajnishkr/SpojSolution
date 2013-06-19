#include<iostream>
#include<cstring>
using namespace std;
char s[1000005];
int prefix[1000005],len;
inline void pre()
{
     int k=0;
     prefix[1]=0;
     for(int q=2;q<=len;q++)
     {
             while(k>0 && s[q-1]!=s[k])
             k=prefix[k];
             if(s[q-1] == s[k])
             k++;
             prefix[q]=k;
     }
     return;
}
int main(){
int k,n,l;
while(1){
scanf("%d%s",&n,&s);
if(n==-1)
break;
len=strlen(s);
pre();
l=prefix[len];
if(n<len) {
printf("0\n");
continue;}
k=(n-len)/(len-l)+1;
printf("%d\n",k);
}
return 0;
}

