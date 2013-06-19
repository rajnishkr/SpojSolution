#include<iostream>
using namespace std;
int main(){
    
    int test,size,min,max,n;
    cin>>test;
    while(test--)
    {
                 int max=0,min=1000000;
                 cin>>size;
                 for(int i=0;i<size;i++)
                 {
                 cin>>n;
                 if(n<min)
                 min=n;
                 if(n>max)
                 max=n;
                 }
                 cout<<min<<" "<<max<<endl;
    }
    return 0;
}
    
                  
