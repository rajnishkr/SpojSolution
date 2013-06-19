#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int h=1;
   while(s[0]!='-')
   {
       stack <int> st;
       st.push(0);
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='{')
           st.push(1);
           else if(s[i]=='}')
           {
               if(st.top()==1)
               st.pop();
               else
               st.push(2);
           }
       }
       int ans=0;
       if(st.top()==2)
       ans=(st.size()-1)/2;
       else if(st.top()==1)
       {
           int ct=1;
           int clo=0;
           st.pop();
           while(st.top()==1)
           {
               ct++;
               st.pop();
           }
           if(st.top()==0)
           ans=ct/2;
           else
           while(st.top()==2)
           {
               st.pop();
               clo++;
           }
           if(clo==1 && ct==1)
           ans=2;
           else
           ans=(ct+clo)/2;
       }
       printf("%d. %d\n",h++,ans);
       cin>>s;
   }
   return 0;
}
