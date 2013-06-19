#include <stdio.h>
#include <iostream>
using namespace std;



bool findProductPair(int *arr, int i, int product, int len)
{
int cur = i, prod = product;
if(cur >= len) return false;
if(arr[cur] == prod){
return true;
}
while(cur< len && arr[cur]!=0 && prod % arr[cur] == 0 ){
if( prod == arr[cur] ){
return true;
}
prod = (int)prod / arr[cur];
cur++;
}
return findProductPair(arr, i+1, product, len);
}


int main(void)
{
int arr[4] = {2,1,3,6};


int len = sizeof(arr)/sizeof(int);
for (int i=0; i < len; i++){
int product = 1;
int j = i;
while(j < len){
product *= arr[j];
if(findProductPair(arr, j+1, product, len)){
cout << " found same pair of product. Not colorful" << endl;
return 1;
}
j++;
}
}


cout << "this is a colorful number" << endl;
return 0;
}
