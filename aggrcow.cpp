#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int input[100009];
int main(){
int t;
scanf("%d",&t);
while(t--)
{
          int n,c;
          scanf("%d%d",&n,&c);
          for(int i=0;i<n;i++)
          scanf("%d",input+i);
          sort(input,input+n);
          int start=1,end=input[n-1]-input[0]+1,mid;
          while(start<end)
          {
                          mid=(start+end)/2;
                          int co=1,j=0;
                          bool flag=false;
          for(int i=1;i<n;i++)
            {  if(input[i]-input[j]>=mid)
                          {co++;
                           j=i;
                           }
                           if(co>=c)
                           {flag=true;
                           break;
           }                }
                           
          if(flag)
          start=mid+1;
          else
          end=mid;
       }
       bool flag=false;
       int co=0,j=0;
        for(int i=1;i<n;i++)
        {                  if(input[i]-input[j]>=start)
                          {co++;
                           j=i;
                           }
                           if(co>=c)
                           {flag=true;
                           break;
                           }
        }
        if(flag)
        cout<<start<<endl;
        else
        cout<<start-1<<endl;
}
return 0;
}
