#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int flag=0;
		int i=1;
		long int s=0;
		while(flag==0)
		{
			if(n>s && n<=(s+i))
			flag=1;
			else
			{
				s=s+i;
				i++;
			}
		}
		int sum=i+1;
		int num=0,den=0;
		for(int j=1;j<=i;j++)
		{
			if(n==(s+j))
			{
				if((i%2)==0)
				{
					num=j;
					den=sum-num;
				}
				else
				{
					den=j;
					num=sum-den;
				}
			}
		}
		cout<<"TERM "<<n<<" IS "<<num<<"/"<<den<<endl;
		t--;
	}
	return 0;
}
			
		
