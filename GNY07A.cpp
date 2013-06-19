#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>

using namespace std;
int c=1;
/*int display(string s,int n)
{    
     cout<<c<<" ";
    for(int i=0;i<s.size();i++)
    {
           if((i+1)!=n)
           cout<<s[i];
    }
    cout<<endl;
    c++;
    return 0;
} */                                                                                     
int main(){
    string s;
    int test,n,c=1;;
    cin>>test;
    while(test--)
    {   cin>>n;
        cin>>s;
        cout<<c++<<" "<<s.erase(n-1,1)<<endl;
    }
    
    return 0;
}   
