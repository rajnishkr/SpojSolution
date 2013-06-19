#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<20
#define LL long long
#include<map>
using namespace std;
int x[2500],y[2500];
struct node {
       int x;int y;
       };
//double slope[2500];
bool compare(const node n1,const node n2)
{
     return n1.x<=n2.x && n1.y<=n2.y;
}

int main(){
int k,test;
scanf("%d",&test);
while(test--)
{
             scanf("%d",&k);
             
             for(int i=0;i<k;i++)
             scanf("%d%d",&x[i],&y[i]);
             
              int m=0;
              node temp[k];
              
             for(int i=0;i<k;i++)
             {      
                     for(int j=0;j<k;j++)
                     {
                             if(i!=j)
                              {
                                     temp[j].x=x[i]-x[j];
                                     temp[j].y=y[i]-y[j];
                      }       }
                    sort(temp,temp+k,compare);
                    for(int j=0;j<k;j++)
                    cout<<temp[j].x<<" "<<temp[jx].y<<endl;  
                    system("pause");      
                    } 
             printf("%d\n",m);
             }
return 0;
}
