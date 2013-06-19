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
#include<map>
using namespace std;
int main(){
    map <int,pair <int,int> > m;
    int arr[5][5],i,j;


    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
     cin>>arr[i][j];
     m[arr[i][j]]=make_pair(i,j);
    }
    }
    //cout<<"x"<<endl;


    while(1)
    {
    int row[5]={5,5,5,5,5},col[5]={5,5,5,5,5},dia[2]={5,5};
    bool flag=0;
    int n;
    while(!flag)
    {
    SS(n);
    //cout<<n<<endl;
    pair <int ,int> p=m[n];
    m[n]=make_pair(-1,-1);
    int i=p.first,j=p.second;

    cout<<i<<" "<<j<<endl;
    if(i!=-1 && j!=-1)
    {
    row[i]--;
    col[j]--;
    if(i==j )
    dia[0]--;
    if(i+j==4)
    dia[1]--;
    cout<<row[i]<<" "<<col[j]<<" "<<dia[0]<<" "<<dia[1]<<endl;
    if(row[i]==0 || col[j]==0 || dia[0]==0 || dia[1]==0)
    {printf("mingo  \n");
     flag=1;
    }

    }
    }
}



system("pause");
return 0;
}
