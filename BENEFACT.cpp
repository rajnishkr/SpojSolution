#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<vector>
using namespace std;
struct node
{
       int j;
       int w;
};
vector<node> v[10000];
int cnt,leaf;

void dfs(int i,int j,int d) {
int k;
if (cnt<d) {
   cnt = d;
   leaf = i;
}
for(int l=0;l<v[i].size();l++){
        k=v[i][l].j;
        if(k!=j)
                dfs(k,i,d+v[i][l].w);
}
}

int main() {
int test,n,j,k,w;
scanf("%d",&test);
while(test--)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    v[i].clear();
for (int i=0;i<n-1;i++) {
    scanf("%d%d%d",&j,&k,&w);
    node temp;
    temp.j=k-1;
    temp.w=w;
    v[j-1].push_back(temp);
    temp.j=j-1;
    v[k-1].push_back(temp);
}

cnt=-1;
       dfs(0,-1,0);
       dfs(leaf,-1,0);
printf("%d\n", cnt);	
}
return 0;

}
