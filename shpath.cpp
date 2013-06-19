#include<map>
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
                 int n;
                 scanf("%d",&n);
                 int arr[n][n],x,cost;
                 for(int i=0;i<n;i++)
                 for(int j=0;j<n;j++)
                 arr[i][j]=200001;
                 map<char*,int> m;
                 
                 for(int i=0;i<n;i++)
                 {        char* s ;
                         scanf("%s",&s);
                         m[s]=i+1;
                         int k;
                         scanf("%d",&k);
                         for(int j=0;j<k;j++)
                         {
                                 scanf("%d%d",&x,&cost);
                                 arr[i][x-1]=cost;
                         }
                 }
                 
                 for(int k=0;k<n;k++)
                 for(int i=0;i<n;i++)
                 for(int j=0;j<n;j++)
                 arr[k][j]=min(arr[k][j],arr[k][i]+arr[i][j]);
                 
                 int q;
                 scanf("%d",&q);
                 
                 for(int i=0;i<q;i++)
                 {       char* des; 
                         char* s ;
                         scanf("%s%s",&s,&des);
                         printf("%d\n",arr[m[s]-1][m[des]-1]);
                 }
    }                            
return 0;
}
