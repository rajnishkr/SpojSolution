#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    
    string s;
    getline(cin,s);
    while(s!="*"){
    char *c,*p;
    c = new char [s.size()+1];
   strcpy (c, s.c_str());
   p=strtok (c," ");
   int i=(int)s[0],j,flag=0;
       if(i>='a')
       j=i-32;
       else
       j=i+32;
  while (p!=NULL)
  { 
  if(p[0]!=i && p[0]!=j)
     {        flag=1;
              break;
     } 
    p=strtok(NULL," ");     
  }
   if(flag)
   printf("N\n");
   else
   printf("Y\n");
    getline(cin,s);
}
return 0;
}
    
