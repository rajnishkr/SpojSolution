#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
int main(){
    //set<int> m,f;
    int test,l=1;
    cin>>test;
    while(test--)
    {
    int n,in;
    cin>>n>>in;
    int x,y,flag=0,arr[20001]={0};
    for(int i=0;i<in;i++)
    {
            cin>>x>>y;
            if(x!=y)
            {
            if(arr[x]==0 && arr[y]==0)
            {
                         arr[x]=1;
                         arr[y]=2;
            }
            else if(arr[x]==0)
                arr[x]=arr[y]%2+1;
            else if(arr[y]==0)
                      arr[y]=arr[x]%2+1;
            else
            {
                if(arr[x]==arr[y])
                flag=1;
            }
          }
          else
          flag=1;
    }
    printf("Scenario #%d:\n",l++);
    if(flag)
    cout<<"Suspicious bugs found!\n";
    else
    cout<<"No suspicious bugs found!\n";
    }
return 0;
}
