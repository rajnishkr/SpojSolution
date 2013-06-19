#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int arr[1<<21];
bool input[21][21];
int n;


long long  backtrack(int k)
{
	if(arr[k] == n )
	return 1;
	int j=arr[k];
    long long sum=0;
	
	for(int i=0;i<n;i++)
	{
		if( input[i][j] && !(k & (1<<i)) )                                     
			sum =sum+backtrack(k |(1<<i));
	}
	return sum;
}

int main(){
    
arr[0]=0;

for( int i=1;i<(1<<20);i++)
arr[i] = arr[i>>1] + (i&1);

int test;
scanf("%d",&test);
while(test--)
{
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
      for(int j=0;j<n;j++)
      scanf("%d",&input[i][j]);
      }
     long long k=backtrack(0);
     printf("%d\n",k); 
}
return 0;
}
