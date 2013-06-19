#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(x) scanf("%d",&x)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
using namespace std;

bool leap(int year)
{
     if(year %400==0)
     return true;
     else if(year%4==0 && year%100!=0)
     return true;
     else
     return false;
}
int months[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(){
    int n,pd,pm,py,pc,d,m,y,cost,sum,c;
    while(1){
    SS(n);
    if(n==0)
    break;
    sum=0,pd=0,pm=0,py=0,pc=0,c=0;
    for(int i=0;i<n;i++)
    {
            SS(d);SS(m);SS(y);SS(cost);
            if(pd==d && pm==m && py==y)
            c++,sum+=(cost-pc);
            pd=d+1,pm=m,py=y,pc=cost;
            
            if(pd>months[pm])
            {
             if(pm==2 && leap(py) && pd==29)
             continue;
              pd=1;
              pm++;
              if(pm>12)
              pm=1,py++;
            }
            
    }
    printf("%d %d\n",c,sum);
} 
    
     

//system("pause");
return 0;
}
