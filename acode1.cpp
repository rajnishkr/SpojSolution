#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
    
    int test,l=1,val;
    //scanf("%d",&test);
    char s[5005];
     scanf("%s",s);
    while(s[0]!='0'){
    int b,c,d,a1;              
     int m=26;
    // scanf("%d",&m);
     
     
     bool flag;
     
     int size=strlen(s);
     long long a[100001]={0};
     
             flag=true;
              
              if(s[0]=='0')
                 flag=false;
           
              if((s[0]-'0')>m)
              flag=false;
              
              a[0]=1;
              
              val=(s[0]-'0')*10+(s[1]-'0');
              if(val<=m)
              a[1]++;
              if((s[1]-'0')<=m && (s[1]-'0')>0)
              a[1]++;
              if((s[1]-'0')>m)
              flag=false;
              
              
               if(s[2]!='0' && (s[2]-'0')<=m)
                      a[2]+=a[1];
                      a[2]%=4207849484;
              if((s[2]-'0')>m)
               flag=false;
                      
               if(((s[1]-'0')*10+(s[2]-'0'))<=m && s[1]!='0')
                      a[2]+=a[0];
                      a[2]%=4207849484;
                      
               if(((s[0]-'0')*100+(s[1]-'0')*10+(s[2]-'0'))<=m && s[0]!='0')
                                 a[2]++;
                      a[2]%=4207849484;   
                      
     for(int i=3;i<strlen(s);i++)
     {     
            if(s[i]!='0')
            a[i]=a[i-1];
            int b,c,d,a1;
            a1=s[i]-'0';
            if(i-1>=0)
            {
                      b=s[i-1]-'0';
                      if(b!=0)
                      {       b=b*10+a1;
                      if(b<=m)
                      a[i]=(a[i]%4207849484+a[i-2]%4207849484)%4207849484;
                      }
            }
            if(i-2>=0)
            {
                      
                   c=s[i-2]-'0';
                   b=s[i-1]-'0';
                   if(c!=0)
                   {
                        c=c*100+b*10+a1;
                        if(c<=m)
                        a[i]=(a[i]%4207849484+a[i-3]%4207849484)%4207849484;
                      }
            }
            //cout<<a[i]<<" ";
    }
    //cout<<size<<endl;
 //   cout<<a[size-1]<<endl;
    if(flag)
    {
    if(a[size-1])
    {
     cout<<a[size-1]<<endl;
     }
    else
    printf("0\n",l++);
}
else
 printf("0\n",l++);
 scanf("%s",s);
}
return 0;
}  
