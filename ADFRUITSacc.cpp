#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
string s1,s2;
int main(){
    while(cin>>s1) 
    {             cin>>s2;
                  char lcs[101];
                  int arr[101][101];
                  int n=s1.length();
                  int m=s2.length();
                  for(int i=0;i<=n;i++)
                  arr[0][i]=0;
                  for(int j=0;j<=m;j++)
                  arr[j][0]=0;
                  
                  for(int i=1;i<=n;i++)
                  {
                          for(int j=1;j<=m;j++)
                                  if(s1[i-1]==s2[j-1])
                                  arr[i][j]=arr[i-1][j-1]+1;
                                  else
                                  arr[i][j]=max(arr[i-1][j],arr[i][j-1]);

                             
                  }
                 /* for(int i=0;i<=n;i++)
                  {       for(int j=0;j<=m;j++)
                          cout<<arr[i][j]<<" ";
                          cout<<endl;
                          }   */
                  int i,j;
                  i=n;
                  j=m;
                  int k=arr[n][m];
                  //cout<<k<<endl;
                  lcs[k]='\0';
                  k--;
                  while(arr[i][j]!=0)
                  {
                            
                                    if(arr[i][j]==arr[i-1][j])
                                    i--;
                                    else if(arr[i][j]==arr[i][j-1])
                                    j--;
                                    else
                                    {
                                        lcs[k]=s2[j-1];
                                         //cout<<s2[j-1]<<"."<<endl;
                                        i--;j--;
                                        k--;
                                       
                                    }
                                   //cout<<i<<" "<<j<<arr[i][j]<<endl;;
                  }
                  
                  //cout<<lcs<<endl;
      i=0;j=0;k=0;
        while(k<strlen(lcs)) {
               while(s1[i]!=lcs[k]) { cout<<s1[i]; i++; }
               while(s2[j]!=lcs[k]) { cout<<s2[j]; j++; }
               cout<<lcs[k];
               i++;
               j++;
               k++;
        }
        while(s1[i]!='\0') { cout<<s1[i]; i++; }
        while(s2[j]!='\0') { cout<<s2[j]; j++; }
        cout<<endl;
    }

return 0;
}
