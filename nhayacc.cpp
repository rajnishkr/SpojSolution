#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<vector>
using namespace std;

int main(){
    
    int n;
    while(cin>>n){
    char arr[n+1];
    scanf("%s",arr);
    string s;
    getline(cin,s);
    getline(cin,s);
    int flag;
    vector<int> v;
    queue<int> q;
if(n <= s.length()) { 
    for(int i=0;i<s.length();)
    {         flag=0;
            int k=i;
            for(int j=0;j<n ;j++)
            {
                    if(k==s.length() || s[k]!=arr[j])
                    {flag=1;
                    break;
                    }
                    
                    if(s[k+1]==arr[0] )
                    { if(q.empty()==0)
                      {
                                      if(q.front()==k+1)
                                      q.push(k+1);
                      }
                      else
                        q.push(k+1);
                    }
                    k++;
                    
            }
            if(flag==0)
            v.push_back(i);
               
                  if(q.empty()==0)
                   {       
                          i=q.front();
                          q.pop();
                   }
                  else
                   i=k+1;
        
    }
}
    int size=v.size();
   
    if(size==0)
   printf("\n\n");
    else
    {  
        for(int i=0;i<size;i++)
        printf("%d\n",v[i]);
    }
}
return 0;
}
            
            
                    
                    
                    
