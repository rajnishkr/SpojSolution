#include<iostream>
#include<vector>
using namespace std;
float f[11]={0.0,5.45,10.90,16.36,21.81,27.27,32.72,38.18,43.63,49.09,54.54};
int convert(char c1,char c2)
{   int n=10*(int)(c1-'0')+ (int)(c2-'0');
    return n;    
}
int count(int a,int b)
{   int count1=0;
    if(a<11)
         {
if(float(b)>=f[a])
count1+=a+1;
else
count1+=a;
}
else
{
if(a==11)
{
count1=11;
}
 else{
if(a==12)
count1=12;
else
{if(a==23)
count1=22;
else
 {
if(float(b)>=f[a-12])
count1+=a;
else
count1+=a-1;
}}
 }
}
return count1;
}                         
int main(){   
int test;
cin>>test;
while(test--)
{
string s1,s2;
cin>>s1>>s2;
int a,b,c,d,count1=0,count2=0;
 a=convert(s1[0],s1[1]);
b=convert(s1[3],s1[4]);
c=convert(s2[0],s2[1]);
d=convert(s2[3],s2[4]);
if(a==0 && c==0)
{cout<<0<<endl;
continue;}
count1=count(a,b);
count2=count(c,d);
cout<<count2-count1<<endl;
}
   return 0;
                 
}
