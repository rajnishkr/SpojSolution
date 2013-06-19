#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define max 200000001
using namespace std;
int z[max];
int arr[max];
int main(){
    
    z[1]=0;
    z[0]=0;
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<max;i++)
    {
               if(i%5==0)
               arr[i]=arr[i/5]+1;
               z[i]=z[i-1]+arr[i];
   }

   int test;
   cin>>test;
   while(test--)
   {
                int n,count=0;
                cin>>n;
                if(n<=200000000)
                cout<<z[n]<<endl;
                else
                {
                    for(int i=200000001;i<=n;i++)
                    {
                            if(i%5==0)
                            count=count+1+arr[i/5];
                    }
                    cout<<count+z[200000000]<<endl;
                }
                
   }

return 0;
}
