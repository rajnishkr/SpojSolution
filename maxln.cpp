#include<cstdio>
#include<iostream>
using namespace std;	 
	int main(){
	    int t;
	    double ans,r;
	    scanf("%d",&t);
    for(int i=1;i<=t;i++){
            scanf("%lf",&r);
	        ans=r*r*4+0.25;
        printf("Case %d: %.2lf\n",i,ans);
        }
        
        return 0;
	    }
