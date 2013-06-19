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
int main(){
    int i=1,j=1,sum=0;
     while(i!=10)
     { sum+=1;
      i++;
      if(i==10)
      break;
       for(int k=0;(k<j && i!=10);k++,i++)
       sum+=2;
        j++;
      if(i==10)
        break;
        }
        cout<<sum<<endl;
        cin>>j;
        return 0;
        }
       
