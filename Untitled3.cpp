//#include<vector>
#include<iostream>
#include<cstdio>
//#include<cmath>
//#include<algorithm>
#include<cstring>
using namespace std;
int main() 
{
    
    int test,i=0,j;
    cin>>test;
    string a,b=" ",c=" ",arr[test],arr2[test];
    j=test;
    while(test--)
    {
                 cin>>a;
                 
                 string k=" "+a+" ";
                 arr[i]=k;
                 arr2[i]=a;
                 int p=b.find(k) ;
                 if(p!=-1)
                  c=c+k;
                 else
                   b=b+k;
                   i++;
                   
    }
       
   for(int i=0;i<j;i++)
    {   
             int p=c.find(arr[i]);
             
            if(p == -1)
            {
            cout<<arr2[i];
            }
             
    } 
system("pause");
cout<<"dfss";
return 0;
}
