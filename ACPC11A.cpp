#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
     int n;            
     scanf("%d",&n) ;
     string s,s1="",s2="",s3="";
     getline(cin,s);
      getline(cin,s);
  char * cstr, *p;
  cstr = new char [s.size()+1];
  strcpy (cstr, s.c_str());
  p=strtok (cstr," ");
  int count=1;
  while (p!=NULL)
  {
    if(p[0]!='#')
    {  s1=s1+" "+p;
      count=0;
    }
    else{
    if(count)
         s2=s2+" "+p;
    else
        s3=s3+" "+p;
                    }
    p=strtok(NULL," ");
  }
 string s4="";
 if(s3!="")
  {s3=s3.substr(1);
   s4=s3+" ";
}
  if(s1!="")
  { 
  s1=s1.substr(1);
  s4=s4+s1+" ";
 }
 if(s2!="") {
 s2=s2.substr(1);
 s4=s4+s2;
}
if(s4[0]==(char)32)
s4=s4.substr(1);
if(s4[s4.size()-1]==char(32))
s4=s4.substr(0,s4.size()-1);
cout<<s4<<endl;
}
return 0;
}
