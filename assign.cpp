#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
bool arr[21];
bool a[21][21];
int n;
int c;
void backtrack(int vis[],int k)
{
     int i;
   if(k==n-1)
   {  c++;  
   //for(int i=0;i<n;i++)
        //   cout<<vis[i]<<" ";
         //  cout<<endl;
        //  
         }
                                                       
     else
     {
         k=k+1;
         for( i=0;i<n;i++)
         {
               if(a[k][i])
               {   int flag=0;
                 for(int j=0;j<k;j++)
                 if(vis[j]==i)
                 flag=1;
                 if(!flag)
                 { 
                  vis[k]=i;
                 backtrack(vis,k);
                 }
         }
         }
     }        
}
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
      c=0;            
     scanf("%d",&n);
    int vis[21];               
    for(int i=0;i<n;i++)
    { vis[i]=-1;
            for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    backtrack(vis,-1);
    printf("%d\n",c);
}



return 0;
}
