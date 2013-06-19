#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
char c[100009];
int prefix[100009];
int main(){
    while(1)
    {            int n;
                 scanf("%s",c);
                 //cin>>c;
                 if(c[0]=='*')
                 break;
                 
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
                    /*for(int i1=0;i1<=lenp;i1++)
                    cout<<prefix[i1]<<" ";   */

                // printf("Test case #%d\n",l++);
                 //if(c[0]==c[1])
                //printf("2 2\n");
               n=lenp;
              if(n%(n-prefix[n])==0)
              printf("%d\n",n/(n-prefix[n]));
              else
              printf("%d\n",1);
                         
                 
    }
    //system("pause");
return 0;
}
