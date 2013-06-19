#include<iostream>
#include<cstdio>
using namespace std;

bool isPrime[1000000];
int prime[100000];
 
int main()
{
	for(int i = 0; i < 1000000; i++) 
    isPrime[i] = true;
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < 1000000; i++)
		if(isPrime[i])
			for(int j = i * 2; j < 1000000; j += i)
				isPrime[j] = false;
 
	int cnt = 0;
	for(int i = 0; i < 1000000; i++)
		if(isPrime[i])
			prime[cnt++] = i;
 
	int c;
	scanf("%d",&c);
	while(c--)
	{
		long long x;
		scanf("%lld",&x);
 
		bool valid = true;
		for(int i = 0; i < cnt &&  prime[i] * prime[i] <= x && valid; i++)
		{
			int mult = 0;
			while(x % prime[i] == 0)
			{
				x /= prime[i];
				mult++;
			}
			valid = prime[i] % 4 != 3 || mult % 2 == 0;
		}
		valid &= x % 4 != 3;
		
		if(valid) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
