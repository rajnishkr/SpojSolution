#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>
using namespace std;

int main(){
    
           int test;
           cin>>test;
           while(test--)
           {
      double u,v,w,U,V,W;
      cin>>u>>v>>w>>U>>V>>W; 
      long double volume=sqrt(4*u*u*v*v*w*w -u*u*pow((v*v+w*w-U*U),2.0) - v*v*pow((w*w+u*u-V*V),2.0) - w*w*pow((u*u+v*v-W*W),2.0) + (v*v+w*w-U*U)*(w*w+u*u-V*V)*(u*u+v*v-W*W) )/12;         
      printf("%.4llf\n",volume) ;
      }
      return 0;
      }
