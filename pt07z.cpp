#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<vector>
using namespace std;

vector<int> v[10000];
int cnt,leaf;

void dfs(int i,int j,int d) {
int k;
if (cnt<d) {
   cnt = d;
   leaf = i;
}
for(int l=0;l<v[i].size();l++){
        k=v[i][l];
        if(k!=j)
                dfs(k,i,d+1);
}
}

int main() {
int n,j,k;
    scanf("%d",&n);
for (int i=0;i<n-1;i++) {
    scanf("%d%d",&j,&k);
    v[j-1].push_back(k-1);
    v[k-1].push_back(j-1);
}

cnt=-1;
       dfs(0,-1,0);
       dfs(leaf,-1,0);
printf("%d\n", cnt);	
}
