#include<iostream>
#include<cstdio>
using namespace std;
int main(){
                 int n,i,k;
                 cin>>n;
                 for( i=1;i<=n;i++)
                 { k=n%i;
                 cout<<i<<" "<<k<<endl;
                 }
    system("pause");
    return 0;
}    
