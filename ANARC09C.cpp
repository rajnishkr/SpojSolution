#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
    int a,b,no=1;
    while(1)
    {
            
    cin>>a>>b;
    if(a==0)
    break;
    int n=a,n1=b,count=0,dis=0;
    for(int i=2;i<=a || i<=b ;i++)
    {       int flag=0;
            int count1=0,count2=0;
            if(i<=a)
            {
                      while(n%i==0)
                      {
                                   flag=1;
                                   count1++;
                                   n/=i;
                      }
            }
            if(i<=b)
            {            
                         while(n1%i==0)
                         {
                                       flag=1;
                                       count2++;
                                       n1/=i;
                         }
            }
            if(flag)
            count++;
            int diff=count1-count2;
            if(diff<0)
            diff*=-1;
            dis=dis+diff;
    } 
    cout<<no++<<". "<<count<<":"<<dis<<endl;  
    
}
return 0;
}
    
