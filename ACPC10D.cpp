#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define max 10000000
long long inp[100005][3];
int main()
{
 
 long long x,n,l=1,temp,m;
 while(1)
 {
 
 	scanf("%lld",&n);
 	if(n==0LL)
 		break;
 	m=n;
 	for(int i=0;i<3;i++)
 		scanf("%lld",&inp[0][i]);
 	m--;
 	int j=1;
 	inp[0][0]=max;
 	inp[0][2]+=inp[0][1];
 	while(m--)
 	{	
 		for(int i=0;i<3;i++)
 		{
 			scanf("%lld",&inp[j][i]);

 		}
 	
 			inp[j][0]+=min(inp[j-1][0],inp[j-1][1]);
 			inp[j][1]+=min(min(inp[j-1][0],inp[j-1][1]),min(inp[j][0],inp[j-1][2]));
 			inp[j][2]+=min(min(inp[j-1][1],inp[j][1]),inp[j-1][2]);
 		    j++;
 	}
 /*	cout<<endl;
 	for(int i=0;i<n;i++)
 	{
            for(int j=0;j<3;j++)
            {
                    printf("%lld ",inp[i][j]);
            }
            printf("\n");
  }*/
 	printf("%lld. %lld\n",l++,inp[n-1][1]);
 }


}
