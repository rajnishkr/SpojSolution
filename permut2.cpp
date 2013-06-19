#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    while(n){
             int arr1[n],arr2[n];
             for(int i=0;i<n;i++)
             {
                     cin>>arr1[i];
                     arr2[arr1[i]-1]=i+1;
             }
             int flag=0;
             for(int i=0;i<n;i++)
             {
                     if(arr1[i]!=arr2[i])
                     {
                                         flag=1;
                                         break;
                     }
             }      
             if(flag)
             cout<<"not ambiguous\n";
             else
             cout<<"ambiguous\n";
             cin>>n;
             }
             return 0;
             }
