#include<iostream>
#include<cstdio>
using namespace std;

bool check[1000000];
int prime[100000];
 
int main()
{   
	for(int i = 0; i < 1000000; i++) 
    check[i] = true;
    
	check[0] = check[1] = false;
	for(int i = 2; i <1000000; i++)
		if(check[i]) {
            
			for(int j = i; j <1000000; j += i)
				check[j] = false; 
                 }
     
	int cnt = 0;
	for(int i = 0; i < 1000000; i++)
		if(check[i])
			prime[cnt++] = i;
    	int c;
	scanf("%d",&c);
	while(c--)
	{
		long long x;
		scanf("%lld",&x);
       bool valid = true;
		for(int i = 0; i < cnt &&  1LL*prime[i] * prime[i] <= x ; i++)
		{
			int m = 0;
			while(x % prime[i] == 0)
			{
				x /= prime[i];
				m++;
			}
			valid = prime[i] % 4 != 3 || m % 2 == 0;
			if(!valid)
			break;
		}
		valid &= x % 4 != 3;
		
		if(valid)
        cout<<"Yes"<<endl;
		else 
        cout<<"No"<<endl;
	}
	return 0;
}
