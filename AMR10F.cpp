#include<iostream>
using namespace std;
int main(){
   int a,n,d,test,sum=0;
    scanf("%d",&test);
    while(test--)
    {
    scanf("%d%d%d",&n,&a,&d);
      sum=n/2.0*(2*a+(n-1)*d)  ;
      cout<<sum<<endl;
      }
      return 0;
      }
    
    


