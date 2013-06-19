#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
 vector<string> str;
 vector<int> v[26];
 int n;
 
 int dfs(int c,int i,bool arr[100001])
 {    //cout<<c<<" "<<n<<endl;
     if(c==n-1)
     return true;
     arr[i]=true;
     string s=str[i];
     //cout<<s<<endl;
     int x=s[s.length()-1]-'a';
     //cout<<x<<endl;
     for(int j=0;j<v[x].size();j++)
     {
             if(arr[v[x][j]]==false)
             {
       //      cout<<v[x][j]<<endl;
             if(dfs(c+1,v[x][j],arr))
             return true;
             }
     }
     return false;
 }    
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
                 
                 scanf("%d",&n);
                 str.clear();
                 for(int i=0;i<26;i++)
                 v[i].clear();
                 for(int i=0;i<n;i++)
                 {
                         char s[1002];
                         scanf("%s",s);
                         str.push_back(s);
                         int j=s[0]-'a';
                         v[j].push_back(i);
                 }
                 int count=0;
                 bool flag=false ;
                 for(int i=0;i<n;i++)
                 {       bool arr[100002]={false};
                         if(dfs(0,i,arr))
                         {flag=true;
                          break;
                          }
                 }
                 if(flag==false)
                 printf("The door cannot be opened.\n");
                 else
                 printf("Ordering is possible.\n");
    }
return 0;
}
