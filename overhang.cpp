#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>  
using namespace std;

int main(){
    float n;
    cin>>n;
    while(n)
    {           
                //cout<<n<<endl;
                float sum=0;
                float card=0;
                while(sum<n)
                {
                  sum=sum+(1/(card+2));
                  card++;
                  }
                  cout<<card<<" card(s)"<<endl;
                  
                  cin>>n;
               
    }
                 return 0;
                 }
                 
