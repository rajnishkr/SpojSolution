#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;  
string vis[101][101];
vector<string> arr;
int s[101][101];
int main(){

int n,m,k1;
scanf("%d%d%d",&n,&m,&k1);
string p;
for(int i=0;i<n;i++)
{
        cin>>p;
        arr.push_back(p);
}

vis[0][0]="00000000000000000000000000";
vis[0][0][arr[0][0]-'A']='1';
s[0][0]=1;
int count=1;
for(int i=1;i<m;i++)
{
  char c=arr[0][i];
  if(vis[0][i-1][c-'A']=='1')
  s[0][i]=s[0][i-1];
  else
       s[0][i]=s[0][i-1]+1; 
  
  vis[0][i]=vis[0][i-1];
  vis[0][i][c-'A']='1';
  //for(int j=0;j<i;j++)
 // vis[0][i][arr[0][j]-'A']=true;
        
}
for(int i=1;i<n;i++)
{
  char c=arr[i][0];
  if(vis[i-1][0][c-'A']=='1')
  s[i][0]=s[i-1][0];
  else
       s[i][0]=s[i-1][0]+1; 
       
  vis[i][0]=vis[i-1][0];
  vis[i][0][c-'A']='1';
 // for(int j=0;j<i;j++)
  //vis[i][0][arr[j][0]-'A']=true;
        
}
for(int i=1;i<n;i++)
for(int j=1;j<m;j++)
{       int c=arr[i][j]-'A',k=0;
        vis[i][j]=vis[i-1][j];
        for(int l=0;l<26;l++)
        {
                if(vis[i][j][l]!='1')
                {
                  if(vis[i][j-1][l]=='1')
                  {vis[i][j][l]='1';
                  k++;
                  }
                }
                else
                k++;
        }
        if(vis[i][j][c]!='1')
        k++;
        s[i][j]=k;
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
cout<<s[i][j]<<" ";
cout<<endl;
}

int x=0;
for(int i=1;i<n;i++) 
{
        for(int j=1;j<m;j++)
        {
                        for(int k=0;k<n-i;k++)  
                        {
                          for(int l=0;l<m-j;l++)
                          {
                                  int count=0;
                                  for (int o=0;o<26;o++)
                                   if(vis[i-1][j-l][o]=='1' || vis[i+k][j-1][o]=='1')
                                   count++;                                  
                                  if(k1==(s[i+k][j+l] -count+ s[i-1][j-1]));
                                  x++;
                          }
                        }
        }
}
cout<<x<<endl;
system("pause");        
return 0;
}
