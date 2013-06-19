#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<map>
#include<stack>
using namespace std;
int gcd(int a,int b )
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	int test;
	char str[280];
	int n,m;
	
	scanf("%d",&test);
	while(test--)
	{
		
		scanf("%d%s",&n,str);
		if(n==0)
		{
		printf("%s\n",str);
		continue;
		}
		m=0;
		for(int i=0;i<strlen(str);i++)
		{
			m=(m*10+(str[i]-'0'))%n;
		}
		printf("%d\n",gcd(n,m));
	}
	
	return 0;
}
	
