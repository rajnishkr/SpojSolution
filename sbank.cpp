#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<map>

using namespace std;

int main()
{
	int test,n;
	map<string,int> m;
	char s[100];
	
	scanf("%d",&test);
	while(test--)
	{
		
	m.clear();
	scanf("%d\n",&n);
	
	while(n--)
	{
		gets(s);
		m[(string)s]++;
	}
	map <string,int> :: iterator it;
	
	for(it=m.begin();it!=m.end();it++)
	{
	printf ("%s %d\n",(*it).first.c_str(),(*it).second);
	}
	if(test!=0)
	printf("\n");
	 
    }
}
