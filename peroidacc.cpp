#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
char c[1000009];
int prefix[1000009];
int main(){
    int test,l=1;
    scanf("%d",&test);
    while(test--)
    {            int n;
                 scanf("%d",&n);
                 scanf("%s",c);
                 prefix[0]=-1;
                 prefix[1]=0;
                long long int i,j;
                int lenp=strlen(c);
                    i=2; 
                    j=1;
                    while(i<=lenp) {
                    if(c[i-1]==c[j-1]) {
                    prefix[i]=j;
                    j++;
                    i++;
                    }
                    else {
                    if(j!=1) j=prefix[j-1]+1;
                    else {prefix[i]=0;
                    i++; }
                       }}       
                    for(int i1=0;i1<=lenp;i1++)
                    cout<<prefix[i1]<<" ";

                 printf("Test case #%d\n",l++);
                 //if(c[0]==c[1])
                //printf("2 2\n");
                 for(int i=1;i<=n;i++)
                 {
                         if(prefix[i])
                         {
                                      if((i)%(i-prefix[i])==0)
                                      printf("%d %d\n",i,(i)/(i-prefix[i]));
                         }
                 }
    }
return 0;
}
