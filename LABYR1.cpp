using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#define PI 3.14159265

int n,m,ans;
vector<string> v;
int posx[4]={-1,0,1,0};
int posy[4]={0,-1,0,1};
struct node{
	int i,j,dis;
};
void dfs(int i,int j)
{	
	node temp;
	temp.i=i;
	temp.j=j;
	temp.dis=0;
	stack<node> q;
	q.push(temp);
	while(!q.empty())
	{
		temp=q.top();
		q.pop();
		cout<<temp.i<<"enter"<<temp.j<<endl;
	    int max1=0,max2=0;
		for(i=0;i<4;i++)
		{
			int tx=temp.i+posx[i];
			int ty=temp.j+posy[i];
		  
			if(tx<0 || ty<0 || tx>= n || ty>=m)
			continue;
			if(v[tx][ty]=='#')
			continue;
			node newtemp;
			newtemp.i=tx;
			newtemp.j=ty;
			newtemp.dis=temp.dis+1;
				ans=max(ans,newtemp.dis);
			/*if(newtemp.dis>=max1)
			{
				max2=max1;
				max1=newtemp.dis;
				
			}
			else if(newtemp.i>=max2)
				 max2=newtemp.dis;
			cout<<tx<<" "<<ty<<endl;*/
			q.push(newtemp);
		}
		cout<<max1<<"  "<<max2<<endl;
	
		
	}
}

int main()
{
	int test;
	string str;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&m);
		scanf("%d",&n);
		ans=0;
		v.clear();
		for(int i=0;i<n;i++)
		{	
			cin>>str;
			v.push_back(str);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(v[i][j]=='.')
				dfs(i,j);
			}
		}
		printf("Maximum rope length is %d.\n",ans);	
	}
	return 0;
}
