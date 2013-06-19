#include<cstdio>
#include<iostream>
#include<map>

using namespace std;

int main(){

map<int,int> row,col,ar,ac;
int temp,x,y;
char c;
for(int i=0;i<1234;i++)
{
row[i]=i;
ar[i]=i;
}
for(int i=0;i<5678;i++)
{col[i]=i;
ac[i]=i;
}

while((c=getchar())!=EOF)
{
	if(c=='R')
	{
		scanf("%d%d",&x,&y);
		x--;
		y--;
		temp=row[x];
		row[x]=row[y];
		row[y]=temp;
		ar[row[x]]=x;
		ar[row[y]]=y;
	}
	else if(c=='C')
	{
		scanf("%d%d",&x,&y);
		x--;
		y--;
		temp=col[x];
		col[x]=col[y];
		col[y]=temp;
		ac[col[x]]=x;
		ac[col[y]]=y;
		
	}
	else if(c=='Q')
	{
		scanf("%d%d",&x,&y);
		x--;
		y--;
		temp=row[x]*5678+col[y]+1;
		printf("%d\n",temp);
	}
	else
	{
		scanf("%d",&x);
		temp=x/5678;
		y=x%5678;
		y--;
		printf("%d %d\n",ar[temp]+1,ac[y]+1);
	}
	getchar();
}
}

		
		
