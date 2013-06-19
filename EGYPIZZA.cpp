#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,half=0,quarter=0,threeq=0,count=0;
    string x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    cin>>x;
    if(x[0]=='3')
    threeq++;
    else if(x[2]=='4')
    quarter++;
    else 
    half++;
    
    }
    //cout<<half<<" "<<threeq<<" "<<quarter<<endl;
    if(quarter<=threeq || quarter==0)
    count=1+((half+1)/2)+ threeq;
    else
    {
        if(half%2!=0)
        quarter-=2;
        quarter-=threeq;
         //cout<<quarter<<endl;
        if(quarter>0)
        count=1+((half+1)/2)+ threeq+(quarter+4)/4;
        else
        count=1+((half+1)/2)+ threeq;
    }
    cout<<count;
    system("pause");
return 0;
}
