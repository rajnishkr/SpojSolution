#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n=10;
    int p,m=10000,i,j=0,sum=0,x;
    for(i=0;i<n;i++)
    {
                    scanf("%d",&p);
                    sum=sum+p;
                    int x=abs(sum-100);
                    if(x<m)
                    {
                           m=x;
                           j=sum;
                    }
                    else if(x==m)
                    {
                         j=max(j,sum);
                     }
    }
    cout<<j<<endl;
    cin>>j;
return 0;
}
