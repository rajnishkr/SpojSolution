#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
#define pb push_back
#define max 1<<30
#define min -1*max

using namespace std;
int ans,r,c;
char arr[1024][1024];
int dfs(int x,int y)
{   
    if(x<0 || y<0 || x>=m || y>=n)
    return min;
	if(arr[x][y]=='#')
	return min;
	
	arr[x][y]='#';
	int a=0,b=0;
	for(int i=0;i<4;i++)
	{
		int t=1+dfs(x+"0211"[i]-'1',y+"1102"[i]-'1');
		if(t>=a)
		{	b=a;
			a=t;
			
		}
		else if(t>b)
				b=t;
	}
	if(ans>(a+b))
	ans=a+b;
	return a;
}
int main(){
int t;

scanf("%d",&t);

while(t--)
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%s",&arr[i]);
	}
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(arr[i][j]=='.')
	dfs(i,j);
	printf("Maximum rope length is %d.\n", ans);
	
	
}
return 0;
}

