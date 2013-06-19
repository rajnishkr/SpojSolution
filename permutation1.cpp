#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
using namespace std;
void swap (char &c,char &d)
{
     char p=c;
     c=d;
     d=p;
}
int main(){
     char arr[100];
 cin>>arr;
 int p[4]={0,1,2,3};
 int i=1,j;
  while (i <strlen(arr)) {
       p[i]--;
      if (i%2==1)
          j = p[i];
          else
          j = 0;
      swap(arr[j], arr[i]);
      cout<<arr<<endl;
       i = 1;
      while (p[i] == 0)  {
         p[i] = i;
         i++;
      } 
   } 

system("pause");
return 0;
}
