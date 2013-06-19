#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
#define N 2005
#define M 304
using namespace std;
int prefix[M][M];
char s[M][M];
char text[N][N];
int row[M];
int m1,m2,m,n;
void pre()
{
     int k=0;
     row[1]=0;
     for(int q=2;q<=m2;q++)
     {      // cout<<s[(q-1)*m2]<<" "<<s[k*m2]<<endl;
             while(k>0 && s[0][(q-1)]!=s[0][k])
             k=row[k];
             if(s[0][q-1] == s[0][k])
             k++;
             row[q]=k;
     }
     return;
}

void pre(int j)
{
     int k=0;
     prefix[j][1]=0;
     for(int q=2;q<=m1;q++)
     {      // cout<<s[(q-1)*m2]<<" "<<s[k*m2]<<endl;
             while(k>0 && s[(q-1)][j]!=s[k][j])
             k=prefix[j][k];
             if(s[q-1][j] == s[k][j])
             k++;
             prefix[j][q]=k;
     }
     return;
}

int main(){
    SS(m1);
    SS(m2);
    for(int i=0;i<m1;i++)
    scanf("%s",s[i]);
    
    int n,m;
    SS(n);
    SS(m);
    for(int i=0;i<n;i++)
    scanf("%s",&text[i]);
    
    pre();
    for(int i=0;i<m2;i++)
    pre(i);
    
    for(int i=1;i<=m2;i++)
    cout<<row[i]<<" ";
    cout<<endl;
    
    for(int i=0;i<m2;i++){
    for(int j=1;j<=m1;j++)
    cout<<prefix[i][j]<<" ";
    cout<<endl;            }
    
    
    


system("pause");
return 0;
}
