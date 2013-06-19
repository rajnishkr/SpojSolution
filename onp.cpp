#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<stack>
#include<cstring>
#define inf 1<<30
#define LL long long
using namespace std;
int main(){
int test;
scanf("%d",&test);
while(test--)
{
             stack<char> s;
             char str[500];
             scanf("%s",str);
             int len=strlen(str);
             for(int i=0;i<len ;i++)
             {
                     if(str[i]=='(')
                     s.push('(');
                     else if(isalpha(str[i]))
                     printf("%c",str[i]);
                     else if(str[i]==')')
                     {
                          while(1)
                          {
                                  if(s.empty())
                                  break;
                                  if(s.top()=='(')
                                  {
                                   s.pop();
                                   break;
                                  }
                                  else
                                  {
                                      printf("%c",s.top());
                                      s.pop();
                                  }
                          }
                     }
                     else
                     s.push(str[i]);
             }
             printf("\n");
}

return 0;
}
