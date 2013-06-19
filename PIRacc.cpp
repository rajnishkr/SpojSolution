#include <cmath>
#include <cstdio>
#include<iostream>
using namespace std;
long long sqr(long long a)
{ return a * a;
 }

int main(){
	long long s, u, v, w, x,y,z;
	int t; 
    scanf("%d", &t);
	while(t--){                                 
		scanf("%lld %lld %lld %lld %lld %lld", &x, &y, &v, &z, &u, &w);
		u = sqr(u);
        v = sqr(v);
        w = sqr(w);
		z = sqr(z); 
        x = sqr(x); 
        y = sqr(y);
		s = 4*u*v*w - u*sqr(v+w-y) - v*sqr(u+w-z) - w*sqr(u+v-x);
		s += (u+v-x)*(u+w-z)*(v+w-y);
		printf("%.4lf\n", sqrt(s) / 12);
	}
	return 0;
}
