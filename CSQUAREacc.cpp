#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
                  
    long long a,m,z,y;
    scanf("%lld",&a);
    char s[251];
    scanf("%s",s);
    scanf("%lld",&m);
    z=1;
    y=a;
    for(int i=strlen(s);i>0;i--)
    {        cout<<z<<" "<<y<<endl; 
            if(s[i-1]=='1')
            z=(z*y)%m;
            else
            {
                if(s[i-1]=='2')
                z=(z*(y*y)%m)%m;
                
            }
            y=((y*y)%m*y)%m;
           
    }
    printf("%lld\n",z);
    //cin>>z;
   
}
 return 0;
}
