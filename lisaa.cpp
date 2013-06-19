#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
string s;
LL max;
LL arr[1000];
LL arr1[1000];
LL fn(int i,char c)
{
       if(i>=s.length())
       return sum;
       LL k=0;
       while(isdigit(s[i]))
       {
        k=k*10+s[i]-'0';
        i++;
        if(i==s.length())
        break;
       }
       if(i==s.length())
       {
           if(c=='+')
           {         arr[i]=sum+k;
                     return sum+k;
           }
           else
           {
                     arr[i]=sum*k;
                     return sum*k;
           } 
       }
       if(c=='+')
       sum1=sum+k;
       else
       sum1=sum*k;
       
       if(s[i]=='+')
       {            if(c=='+')
                    arr[i]=max(sum1 + fn(),sum+k+fn());
                    else
                    arr[i]=max(sum1*fn(),sum*k+)
       
       arr[i]=max()
       
       
       
int main(){



return 0;
}
