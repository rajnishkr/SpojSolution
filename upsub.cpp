#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define LL long long
#define SS(n) scanf("%d",&n)
using namespace std;
#include<set>
set<string> s;
int lis[1005];
string w;


void dfs(int i,string str)
{
     str=w[i]+str;
     
     if(lis[i]==1)
     {s.insert(str);
     return;
     }
     
     int c=lis[i];
     for(int j=i-1;j>=0;j--)
     {
             if(lis[j]==c-1 && w[j]<=w[i])
             dfs(j,str);
     }
     
    return ;
} 
int main(){
int test;
scanf("%d",&test);
getchar();
while(test--)
{            s.clear();
             int i1=0,h;
             cin>>w;
             int len=w.length(),max=1,pos=0;
             lis[0]=1;
             for(int i=1;i<len;i++)
             {        lis[i]=1;
                     for(int j=i-1;j>=0;j--)
                     {
                             if((lis[j]+1)>lis[i] && w[j]<=w[i])
                             lis[i]=lis[j]+1;
                     }
                             if(lis[i]>=max)
                             {
                             max=lis[i];
                             pos=i;
                             }
                     
             }
    /*         for(int i=0;i<len;i++)
             cout<<lis[i]<<" ";
             cout<<endl;
             for(int i=0;i<len;i++)
             cout<<arr[i]<<" ";
             cout<<endl;
             for(int i=0;i<len;i++)
             cout<<w[i]<<" ";
             cout<<endl;
             cout<<pos<<max<<endl;   */
             string str="";
             for(int i=pos;i>=0;i--)
             {
                     if(lis[i]==max)
                     dfs(i,str);
             }
           //  cout<<"x";
             set<string> :: iterator it;
             for(it=s.begin();it!=s.end();it++)
             cout<<(*it)<<endl;
             printf("\n");
}             


//system("pause");
return 0;
}
