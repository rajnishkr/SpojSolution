#include<iostream>
#include<cstdio>
using namespace  std;
int main(){
    int test;
    cin>>test;
    string s;
    getline(cin,s);
    while(test--)
    {       
            char c;
             getline(cin,s);
             int arr[26]={0};
             for(int i=0;i<s.size();i++)
             {   if(s[i]!=' ')
                {
                int j=s[i]-'A';
                arr[j]++;
                }
             }
             int j,max=0,c1=0;
             for(int i=0;i<26;i++)
             {
                   if(arr[i]==max)
                   c1++;
                  if(arr[i]>max)
                  {max=arr[i];
                  j=i;
                  c1=0;
                  }
                  
             }
             if(c1>0)          
             {cout<<"NOT POSSIBLE\n";
             continue ;
             }
            int jmp;
             if(j-4>=0)
             {
                       cout<<j-4<<" ";
                       jmp=j-4;
             }
             else
             {    jmp=j+22;
                 cout<<j+22<<" ";
                 }
           for(int i=0;i<s.size();i++)
             {
                int k=s[i];
                if(k!=32)
                {
                k=k-jmp;
               if(k<'A')
                {
                  k='A'-k;
                  k='Z'-k+1;
                }
                }
                cout<<char(k);
                }
                cout<<endl;       
               
             } 
    
    return 0;
}
             
             
