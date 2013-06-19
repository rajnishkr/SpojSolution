#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
char str[1000000];
int main(){
    int test;
    scanf("%d",&test);
   char c=getchar();
    while(test--)
    {
                 //char c;
                 
                 int max=0,count=0,len=0,prevlen=0;
                 //string str;
                 while(1)
                 {scanf(" %[^\r\n]",str);
                  if(str!="")
                  break;
                  }
                  int l=strlen(str);
                 for(int i=0;i<l;i++)
                 {  c=str[i];
                    
                    if(c==' ' )
                    { while(i<l && str[i+1]==' ')
                      i++; 
                      //cout<<i<<endl;
                      if(len==prevlen)
                      count++;
                      else
                      {
                      count=1;
                      prevlen=len;
                      }
                      len=0; 
                    }
                    else if(i==(l-1)){if(len==(prevlen-1))
                      count++;}
                      else
                        len++;
                    if(count>max)
                    max=count;
                 }
                 
                 printf("%d\n",max);
    
    }
return 0;
}
