#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 10000000
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
#include<map>
using namespace std;
int main(){
int n,c,r,p=1;
while(1)
{
        SS(n);
        SS(c);
        SS(r);
        if(n==0)
        break;
        map<string,int> m;
        int co=1,x;
        int arr[105][105],loc[1200];
        for(int i=0;i<102;i++)
        for(int j=0;j<102;j++)
        arr[i][j]=inf;
        char city1[20],city2[20],path[20];
        for(int i=0;i<=c;i++)
        {
                scanf("%s",city1);
                x=m[city1];
                if(x==0) m[city1]=co++;
                loc[i]=m[city1];
        }
        int cost,c1,c2,len;
        for(int i=0;i<r;i++)
        {
                
                scanf("%s %s %s",city1,path,city2);
                sscanf(path+2,"%d",&cost);
                //cout<<cost<<endl;
                x=m[city1];
                if(x==0)
                m[city1]=co++;
                c1=m[city1];
                x=m[city2];
                if(x==0)
                m[city2]=co++;
                c2=m[city2];
                len=strlen(path)-1;
                if(path[len]=='>')
                arr[c1][c2]=min(arr[c1][c2],cost);
                if(path[0]=='<')
                arr[c2][c1]=min(arr[c2][c1],cost);
        }
        
        /*for(int i=1;i<co;i++) {
        for(int j=1;j<co;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;            }   */
        for(int k=1;k<co;k++)
        for(int i=1;i<co;i++)
        for(int j=1;j<co;j++)
        arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
        
        int sum=0,source=loc[0];
        for(int i=1;i<=c;i++)
        sum+=arr[source][loc[i]]+arr[loc[i]][source];
        printf("%d. %d\n",p++,sum);
}
//system("pause");
return 0;
}
