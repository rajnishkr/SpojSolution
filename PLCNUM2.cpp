#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
int k=1;
for(int i=0;i<n;i++)
{
        for(int j=1;j<=n;j++)
        cout<<k++<<" ";
        cout<<endl;
}
 //cin>>n;
return 0;
}
