#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t,x,m;
    scanf("%d",&t);
    while(t--){
               vector<int> ag;
               while(1)
               {
                       scanf("%d",&x);
                       if(x!=0)
                       ag.push_back(x);
                       else
                       break;
               }
               
               m=0;
               while(1)
               {       vector<int> tom;
                       scanf("%d",&x);
                       if(x!=0)
                       tom.push_back(x);
                       else break;
                       while(1)
                       {
                             scanf("%d",&x);
                              if(x!=0)
                              tom.push_back(x);
                              else break;  
                       }
                       int arr[2][2001];
                       for(int i=0;i<=tom.size();i++)
                       arr[0][i]=0;
                       arr[1][0]=0;
                       for(int i=1;i<=ag.size();i++)
                       {
                               for(int j=1;j<=tom.size();j++)
                               {
                                       if(ag[i-1]==tom[j-1])
                                       arr[1][j]=arr[0][j-1]+1;
                                       else
                                       arr[1][j]=max(arr[1][j-1],arr[0][j]);
                                       arr[0][j-1]=arr[1][j-1];
                               }
                               arr[0][tom.size()]=arr[1][tom.size()];
                       }
                       m=max(m,arr[1][tom.size()]);
               }
               printf("%d\n",m);
    }
return 0;
}
