#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int test;
scanf("%d",&test);
while(test--)
{
             int n,x,y;
             scanf("%d",&n);
             bool visw[509]={false};
             bool vism[5005]={false};
             vector<int> men[n+1];
             vector<int> women[n+1];
             for(int i=0;i<n;i++)
             {
                     scanf("%d",&x);
                     for(int j=0;j<n;j++)
                     {
                     scanf("%d",&y);
                     women[x-1].push_back(y-1);
                     }
             }
             vector<int> menvis[n+1];
             int ans[505];
             for(int i=0;i<=n;i++)
             ans[i]=-1;
             for(int i=0;i<n;i++)
             {
                     scanf("%d",&x);
                     for(int j=0;j<n;j++)
                     {
                             scanf("%d",&y);
                             men[x-1].push_back(y-1);
                             menvis[x-1].push_back(1);
                     }
             }
             bool flag=true;
             while(flag)
             {
                       flag=false;
                       for(int i=0;i<n;i++) 
                       {
                               if(vism[i]!=true)
                               {
                                 
                                 flag=true;
                                 int k=0;
                                 while(menvis[i][k]!=1)
                                    k++;
                                 menvis[i][k]=0;
                               
                                 if(ans[men[i][k]]==-1)
                                 {
                                  ans[men[i][k]]=i;
                                  vism[i]=true;
                                  }
                                  else
                                  {
                                  int f=0,l=ans[men[i][k]];
                                  for(int j=0;j<n;j++)
                                  {
                                  if(women[men[i][k]][j]==l)
                                  {
                                  f=1;
                                  break;
                                  }
                                  if(women[men[i][k]][l]==i)
                                  {
                                  flag=-1;
                                  break;
                                  }
                                  }
                                  if(flag==-1)
                                  {
                                  ans[men[i][k]]=i;
                                  vism[i]=true;
                                  vism[l]=false;
                                  }
                                  }
                       }
             }
 
}
int ans1[n];
for(int i=0;i<n;i++)
ans1[ans[i]]=i;
for(int i=0;i<n;i++)
cout<<i+1<<" "<<ans1[i]+1<<endl;
}                                 
return 0;
}
