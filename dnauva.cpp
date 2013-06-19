#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<set>
#define inf 1<<30
#define LL long long
using namespace std;
char s1[300],s2[300];
int len1,len2;
int arr[3005][305];

int lcs()
{
    for(int i=1;i<=len1;i++)
    for(int j=1;j<=len2;j++)
    if(s1[i-1]==s2[j-1])
    arr[i][j]=arr[i-1][j-1]+1;
    else
    arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
    return arr[len1][len2];
}

set<string> v;
//string str="";
void dfs(string str,int i,int j)
{
  if(i==0 || j==0)
  { v.insert(str);
  return;
  }
  bool flag=false;
  if(arr[i][j-1]==arr[i][j])
  {
    flag=true;
    dfs(str,i,j-1);
  }
  if(arr[i-1][j]==arr[i][j])
  {
    flag=true;
    dfs(str,i-1,j);
  }
  if(!flag)
  {
             str=s2[j-1]+str;
           dfs(str,i-1,j-1);
  }
}





int main(){
    
while(scanf("%s%s",s1,s2)!=EOF)
{

  len1=strlen(s1);
  len2=strlen(s2);
  for(int i=0;i<=len2;i++)
  arr[0][i]=0;
  for(int i=0;i<=len1;i++)
  arr[i][0]=0;
  
  int l=lcs();
  if(l==0)
  cout<<"No common sequence.\n";
  else
  {  string  str="";
  v.clear();
      dfs(str,len1,len2);
      set<string> :: iterator it;
      for( it=v.begin();it!=v.end();it++)
      cout<<(*it)<<endl;
  } 
}    
return 0;
}
