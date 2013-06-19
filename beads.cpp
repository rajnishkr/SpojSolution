#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		cin>>s;
		int len=s.length();
		int index=1;
		string str=s;
		string s1=s;
		for(int i=1;i<len;i++)
		{
			
			s1.append(1,s1[0]);
			s1.erase(0,1);
			if(s1<str)
			{
				index=i+1;
				str=s1;
			}
		}
		printf("%d\n",index);
	}
	return 0;
}
