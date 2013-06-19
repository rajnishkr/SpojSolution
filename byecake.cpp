#include<vector>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
    while(1)
    {
    float i,j,k,l,i1,j1,k1,l1;
    cin>>i>>j>>k>>l>>i1>>j1>>k1>>l1;
    if(i==-1 && j==-1 && k==-1 && l==-1 && i1==-1 && j1==-1 && k1==-1 && l1==-1 )
    break;
     vector<float> v;
     v.push_back(i/i1);
     v.push_back(j/j1);
     v.push_back(k/k1);
     v.push_back(l/l1);
     sort(v.begin(),v.end());
     int p =(int)ceil(v[3]);
    
    //cout<<v[3]<<endl;
     printf("%d %d %d %d\n",(int)(p*i1-i),(int)(p*j1-j),(int)(p*k1-k),(int)(p*l1-l));

     }
     return 0;
     }      
