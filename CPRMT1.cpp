#include <stdio.h>
#include <string.h>
 
int cnt[2][26]; //26 lowercase letters
 
int main() {
  char s[1001];
  int i;
  while (gets(s)) { //note that blank lines may appear, scanf %s would not work
    memset(cnt,0,sizeof(cnt));
    for (i = 0; s[i] != '\0'; i++) {
      cnt[0][s[i]-'a']++; //compute occurences in first string
    }
    gets(s);
    for (i = 0; s[i] != '\0'; i++) {
      cnt[1][s[i]-'a']++; //compute occurences in second string
    }
    for (i = 0; i < 26; i++) {
      if (cnt[1][i] < cnt[0][i]) cnt[0][i] = cnt[1][i];
      while (cnt[0][i]--) {
        putchar(i+'a');
      }
    }
    putchar('\n');
  }
}
