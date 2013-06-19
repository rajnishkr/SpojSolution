#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>


using namespace std;
int main(){
    
    string s;
   // while(1){
    cin>>s;
    int n=s.length();
    double count1=0,count2=0;
    for(int i=0;i<s.length()-1;i++)
    {
             if(s[i]=='0' && s[i+1]=='0')
             count1++;
             if(s[i]=='0')
             count2++;
    }
    if(s[n-1]=='0')
    {
                 if(s[0]=='0')
                 count1++;
                 count2++;
    }
    double  shoot,rotate;
    rotate=count2/s.length();
    shoot=count1/count2;
   // cout<<shoot<<rotate<<endl;
    
    if(shoot==rotate)
    cout<<"EQUAL"<<endl;
    else
    {
        if(shoot>rotate)
        cout<<"SHOOT"<<endl;
        else
        cout<<"ROTATE"<<endl;
    }
   // cin>>s;
//}
    return 0;
}
    
