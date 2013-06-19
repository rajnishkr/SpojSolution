#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
    
    string s;
    cout<<"Ready\n";
    while(1)
    {       
            getline(cin,s);
            if(s[0]==' ')
            break;
            int flag=0;
            if((s[0]=='b' && s[1]=='d')|| (s[0]=='d' && s[1]=='b'))
            flag=1;
            if((s[0]=='p' && s[1]=='q')|| (s[0]=='q' && s[1]=='p'))
            flag=1;
            if(flag)
            cout<<"Mirrored pair\n";
            else
            cout<<"Ordinary pair\n";
    }
    
            
            
    
    return 0;
}
