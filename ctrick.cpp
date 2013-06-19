#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[20009]={0};
int main(){
int i,j,k,p,n,test;
scanf("%d",&test);
while(test--){
scanf("%d",&n);
vector<int> vec;
for(i=0;i<n;i++)
vec.push_back(i);
 j=1,k=0,p=n;
while(p)
{         
  k=(k+j)%p;
  arr[vec[k]]=j;
  vec.erase(vec.begin()+k);
  j++;
  p--;
}
printf("%d",arr[0]);
for(int i=1;i<n;i++)
printf(" %d",arr[i]);
printf("\n");
vec.clear();
}
return 0;
}
