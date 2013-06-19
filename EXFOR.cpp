#include<iostream>

using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {  int a,c=0;
       for(int i=0;i<10;i++)
             {
                            cin>>a;
                            if(a==1)
                            c++;
             }
             int sum= c*(c-1)*(c-2)/6+c*(c-1)*(10-c)/2+c*(10-c)*(10-c-1)/2+c*(c-1)/2+c*(10-c);
            // cout<<sum;
             cout<<sum%2<<endl;
       }
       return 0;
       }
