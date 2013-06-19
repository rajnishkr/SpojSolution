#include<iostream>
#include<cstring>
using namespace std;
int main()
{
          string s;
          cin>>s;
          int m=26;
while(s[0]!='0')
{
                 int len=s.length(),flag=1,val,a1;
                 long long table[len];
                 table[0]=1;
                  if(s[0]=='0')
                 flag=false;
           
              if((s[0]-'0')>m)
              flag=false;
              
              table[0]=1;
              
              val=(s[0]-'0')*10+(s[1]-'0');
              if(val<=m)
              table[1]++;
              if((s[1]-'0')<=m && (s[1]-'0')>0)
              table[1]++;
              if((s[1]-'0')>m)
              flag=false;
              
                 for(int i=2;i<len;i++)
                 {
                          if(s[i]!='0')
            table[i]=table[i-1];
            int b,c,d,table1;
            a1=s[i]-'0';
            if(i-1>=0)
            {
                      b=s[i-1]-'0';
                      if(b!=0)
                      {       b=b*10+a1;
                      if(b<=m)
                      table[i]=(table[i]%4207849484+table[i-2]%4207849484)%4207849484;
                      }
            }
                 } 
if(flag)
cout<<table[len-1]<<endl;
else
cout<<'0'<<endl;
cin>>s;
}    
return 0;
}
