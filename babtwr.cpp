#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
struct node
{
	long long x,y,z;
};
vector<node> A;
node temp;
long long solve(int j)
{
	long long ans;
	ans=0;
	for(int i=0;i<A.size();++i)
		if(A[j].x>A[i].x && A[j].y>A[i].y)
			ans=max(ans,A[i].z+solve(i));
	return ans;
}
 
 
int main()
{
	int n;
	while(1)
	{	cin>>n;
		if(n==0)
		break;
		A.clear();
		for(int i=0;i<n;++i)
		{
			cin>>temp.x>>temp.y>>temp.z;
			A.push_back(temp);
			swap(temp.x,temp.z);
			A.push_back(temp);
			swap(temp.x,temp.z);
			swap(temp.y,temp.z);
			A.push_back(temp);
		}
		for(int i=0;i<A.size();++i)
			if(A[i].x>A[i].y) swap(A[i].x,A[i].y);
		long long ans=0;
		for(int i=0;i<A.size();++i)
			ans=max(ans,A[i].z+solve(i));
		cout<<ans<<"\n";
	}
}


