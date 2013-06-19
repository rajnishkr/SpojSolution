#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
//without suffix array
int main(){
  while(1){
    char s[100005];
    scanf("%s",s);
    int a=0,b=1,n=strlen(s),x;
   while (b < n)     {
      {
      x = 0;
      while( x < n && s[(a + x) % n] == s[(b + x) %n])
          x++;
      if (s[(a + x) % n] > s[(b + x) %n])
         a = b, b = b + 1;
      else   
         b = b + x + 1;
      }
      
}
printf("%d",a);
}

return 0;
}
