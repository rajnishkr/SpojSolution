#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    char a[n+1];
    cin>>a;
    string s="ABCD";
    int count[4]={0};
    int m=2*n;
    char b[m];
    //int in1=s.find(a[0]);
    for(int i=0;i<m;i++)
    {
            int j=s.find(a[i]);
               count[j]++;
    }
    for(int i=0;i<4;i++)
    {
            cout<<count[i]<<endl;
    }
    
    
    
    
    
    //cout<<a[in1]<<endl ;
    system("pause");
}
