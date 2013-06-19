#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define LL long long
using namespace std;
int lf[1001];
int rt[1001];
int input[1001][1001];
//int s[1001][1001];
int pos[1001];        
int area,n,m;

//funtion for larget rectangle in histogram
void fn(int index)
{
lf[0]=1;
pos[0]=0;
 int j=0;
    for(int i=1;i<m;i++)
    {       
            while(j>=0)
            {
             if(input[index][pos[j]]>=input[index][i])
             j--;
             else
             break;
             }
             if(j<0)
             lf[i]=i+1;
             else
             lf[i]=i-pos[j];
             j++;
             pos[j]=i;
     }
    rt[m-1]=1;
    pos[0]=m-1;
    j=0;
    for(int i=m-2;i>=0;i--)
    {
            
            while(j>=0)
            {
              if(input[index][pos[j]]>input[index][i])
              j--;
              else
              break;
            }
            if(j<0)
            rt[i]=m-i;
            else
            rt[i]=pos[j]-i;
            j++;
            pos[j]=i;
    }
    for(int i=0;i<m;i++)
    area=max(area,input[index][i]*(lf[i]+rt[i]-1));
return;
}


int main(){
int test;
scanf("%d",&test);
while(test--)
{     
scanf("%d%d",&n,&m);
for(int j=0;j<m;)
{
char ch=getchar();
if(ch=='R')
input[0][j]=0,j++;
if ( ch=='F')
input[0][j]=1,j++;
}                               
                               
 for(int i=1;i<n;i++)
          for(int j=0;j<m;)
        {
             char ch=getchar();  
            if(ch=='R')
            input[i][j]=0,j++;
            if ( ch=='F')
            input[i][j]=input[i-1][j]+1,j++;
         }
       
      area=0; 
      for(int i=0;i<n;i++)
      fn(i);
      printf("%d\n",area*3);
}


return 0;
}
