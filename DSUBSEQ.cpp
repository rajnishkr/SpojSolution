#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<map>
const long long  mod=1000000007;
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {
    string s;
    cin>>s;
    long long sol[100001];
    map<char,int> m;
    long long arr[100001];
    arr[0]=0;
    sol[0]=1;
    
    for(int i=1;i<=s.length();i++)
    {       if(m[s[i-1]])
            {
                         arr[i] = sol[i-1]-sol[m[s[i-1]]-1];
                         if(arr[i]<0) 
                         arr[i]=arr[i]+mod;
            }
            else
            arr[i] = sol[i-1];
            sol[i] = (sol[i-1]%mod+arr[i]%mod)%mod;
            m[s[i-1]] =i;
    }
    long long ans=sol[s.length()]%mod;
    cout<<ans<<endl;
}
return 0;
}
