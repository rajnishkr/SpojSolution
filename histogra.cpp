#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL long long
#include<stack>
#define inf 1<<30
using namespace std;
LL input[100005];
int lf[100005];
int rt[100005];
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

    stack<int> s;
    lf[0]=1;
    s.push(0);
    for(int i=1;i<n;i++)
    {       LL val=input[i];
            while(!s.empty())
            {
             if(input[s.top()]>=val)
             s.pop();
             else
             break;
             }
            // cout<<s.empty()<<"e"<<endl;
             
             //cout<<endl;
             if(s.empty())
             lf[i]=i+1;
             else
             lf[i]=i-s.top();
             s.push(i);
    }
    while(!s.empty())
    s.pop();
    
    rt[n-1]=1;
    s.push(n-1);
    for(int i=n-2;i>=0;i--)
    {
            LL val=input[i];
            while(!s.empty())
            {
              if(input[s.top()]>=val)
              s.pop();
              else
              break;
            }
            if(s.empty())
            rt[i]=n-i;
            else
            rt[i]=s.top()-i;
            s.push(i);
    }
    LL area=0;
    /*for(int i=0;i<n;i++)
    cout<<lf[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<rt[i]<<" ";
    cout<<endl;*/
    for(int i=0;i<n;i++)
    area=max(area,input[i]*(lf[i]+rt[i]-1));
    cout<<area<<endl;

}
return 0;
}
