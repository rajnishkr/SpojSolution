#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#define m 5001
using namespace std;
int arr[2][m];
 char s[m];
int main(){
 int t;
scanf("%d",&t);
 while(t--)
 {
            scanf("%s",s);
            int l=strlen(s);
            
            for(int i=0;i<=l;i++)
            arr[0][i]=0;
            arr[1][0]=0;
            for(int i=1;i<=l;i++)
            {
                    for(int j=1;j<=l;j++)
                    {
                            if(s[i-1]==s[l-j])
                            arr[1][j]=arr[0][j-1]+1;
                            else
                            arr[1][j]=max(arr[0][j],arr[1][j-1]);
                            arr[0][j-1]=arr[1][j-1];
                    }
                    arr[0][l]=arr[1][l];
            }
            cout<<l-arr[1][l]<<endl;
            }


return 0;
}
