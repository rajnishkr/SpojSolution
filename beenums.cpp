#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    while(n!=-1)
   {
     if(n==1)
     { cout<<"Y"<<endl;
     cin>>n;
     continue;
     }
     n=n-1;
     if(n%3!=0)
     {cout<<'N'<<endl;
       cin>>n;
     continue;
     }
     int m=n/3;
     int a=sqrt(m);
     long long b=a*(a+1);
     if(b==m)
    cout<<"Y"<<endl;
    else
    cout<<"N"<<endl;
    scanf("%d",&n);
}
return 0;
}

     
         
