#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

long long arr[1<<21];
int input[21];
int n;


long long  backtrack(int l,int k)
{
if(arr[k] == n )
return 1;
long long j=arr[k],sum=0;

int c = k & input[l];  
while(c)
{
	int s=c&-c; 
	sum+= backtrack(l+1,k^s);
	c^= s;
}	return sum;
}

int main(){
    
arr[0]=0;

for( int i=1;i<(1<<20);i++)
arr[i] = arr[i>>1] + (i&1);

int test,x;
scanf("%d",&test);
while(test--)
{
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
              input[i]=0;
      for(int j=0;j<n;j++)
      {
              scanf("%d",&x);
              input[i]=input[i] | (x<<(j));
      }
      //cout<<input[i];
      }
     long long k=backtrack(0,0);
     printf("%d\n",k); 
}
return 0;
}
