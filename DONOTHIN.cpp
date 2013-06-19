#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    
    int n,m,c,a;
    cin>>n>>m;
    while(n!=-1)
    {
                 long long sum=0;
                 c=n;
                for(int i=0;i<n;i++)
                {
                        cin>>a;
                        sum=sum+c*a;
                        c--;
                }
                cout<<sum*m<<endl;
                cin>>n>>m;
    }
    return 0;
}
