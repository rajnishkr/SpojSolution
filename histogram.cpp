#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL long long
#define inf 1<<30
using namespace std;
LL input[100005];
int lf[100005];
int rt[100005];
int s[100005];
int main(){
    int n;
    while(1)
    {
    scanf("%d",&n);
    if(n==0)
    break;
    LL x,m=inf;
    for(int i=0;i<n;i++)
    scanf("%lld",&input[i]);

    lf[0]=1;
    s[0]=0;
    int j=0;
    for(int i=1;i<n;i++)
    {       
            while(j>=0)
            {
             if(input[s[j]]>=input[i])
             j--;
             else
             break;
             }
             if(j<0)
             lf[i]=i+1;
             else
             lf[i]=i-s[j];
             j++;
             s[j]=i;
    }
    
    rt[n-1]=1;
    s[0]=n-1;
    j=0;
    for(int i=n-2;i>=0;i--)
    {
            
            while(j>=0)
            {
              if(input[s[j]]>input[i])
              j--;
              else
              break;
            }
          //cout<<j<<s[j]<<endl;
            if(j<0)
            rt[i]=n-i;
            else
            rt[i]=s[j]-i;
            j++;
            s[j]=i;
    }
    LL area=0;
 /*   for(int i=0;i<n;i++)
    cout<<lf[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<rt[i]<<" ";
    cout<<endl;
   */ for(int i=0;i<n;i++)
    area=max(area,input[i]*(lf[i]+rt[i]-1));
    cout<<area<<endl;

}
return 0;
}
