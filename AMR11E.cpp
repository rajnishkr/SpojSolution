#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    bool primes[10000]={false};
    primes[0]=true;
    primes[1]=true;
    int i,j;
    for (i = 2;i<10000;i++)  
    if (primes[i]==false)
    for (j =i*i;j<10000;j+=i)
      primes[j]=true;
    vector<int> v,vec;
    for(int i=2;i<10000;i++)
    if(primes[i]==false)
    v.push_back(i); 
    //cout<<i<<endl;
    //system("pause");}
    int c=0;
     i=30;
    while(c<=1200)
    { 
       int k=0,j=0;
       while(k<3 )
       { 
         if(v[j]>i)
          break; 
         //cout<<v[j]<<"j";
         if(i%v[j]==0)
         k++;
         j++;
       }
       if(k>=3)
       {vec.push_back(i);
       c++; }
       i++;
    }
    int test;
    scanf("%d",&test);
    while(test--)
    {
      int n;
      scanf("%d",&n);
      printf("%d\n",vec[n-1]);
    }
return 0;
}
