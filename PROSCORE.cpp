#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    
    int test,t=1;
    cin>>test;
    while(test--)
    {
    bool ans[3];
    ans[0]=true;
    ans[1]=true;
    ans[2]=true;
    int n,p;
    cin>>n>>p;
    int ans1[12]={0};
    for(int i=0;i<n;i++)
    {
            int b;
            int count=0;
            for(int j=0;j<p;j++)
            {
                  cin>>b;
          
                    if(b==1)
                    {
                      count++;
                      ans1[j]=1;
                    }
          }
           if(count==0)
           ans[1]=false;
           if(count==p)
           ans[0]=false; 
    }
   
    for(int i=0;i<p;i++)
    {
    if(ans1[i]==0)
    {
                  ans[2]=false;
                  break;
    }
    
    }
    
    int c=ans[2]*4+ans[1]*2+ans[0];
    printf("Case %d: %d\n",t++,c);
}
return 0;
}
