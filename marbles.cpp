#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n, k, t;
    scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &k);
         n--; 
         k--;
		long long ans = 1;
		if(n - k < k) k = n - k;
		for(int i = 0; i < k;i++ )
         {ans *= n--;
          ans /= (i+1);
          }
		printf("%lld\n", ans);
	}

return 0;
}
