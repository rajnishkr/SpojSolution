#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define inf 1<<30
#define LL long long
using namespace std;
struct node {
       LL sum;
       LL lsum;
       LL rsum;
       LL csum;
       };
node tree[1000009];
LL input[50009];
void create(int b,int e,int ind)
{
     if(b==e)
     {
     tree[ind].sum=input[b];
     tree[ind].rsum=input[b];
     tree[ind].lsum=input[b];
     tree[ind].csum=input[b];
     return ;
     }
     create(b,(b+e)/2,2*ind+1);
     create((b+e)/2+1,e,2*ind+2);
     tree[ind].sum=tree[2*ind+1].sum+tree[2*ind+2].sum;
     tree[ind].lsum=max(tree[2*ind+1].lsum,tree[2*ind+1].sum+tree[2*ind+2].lsum);
     tree[ind].rsum=max(tree[2*ind+1].rsum+tree[2*ind+2].sum,tree[2*ind+2].rsum);
     LL m=max(tree[2*ind+1].csum,tree[2*ind+2].csum);
     tree[ind].csum=max(m,tree[2*ind+1].rsum+tree[2*ind+2].lsum);
     return ;
}
node query(int i,int j,int b,int e,int ind)
{
             
             if(i>e || b>j)
             {
             node temp;
             temp.sum=-inf,temp.lsum=-inf,temp.rsum=-inf,temp.csum=-inf;
             return temp;
             }
             if(i<=b && e<=j)
             return tree[ind];
             node left,right,ans;
             left=query(i,j,b,(b+e)/2,2*ind+1);
             right=query(i,j,(b+e)/2+1,e,2*ind+2);
             ans.sum=right.sum+left.sum;
             ans.lsum=max(left.lsum,left.sum+right.lsum);
             ans.rsum=max(right.rsum,left.rsum+right.sum);
             LL m=max(left.csum,right.csum);
             ans.csum=max(m,left.rsum+right.lsum);
             return ans;
}
             
                 
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%lld",&input[i]);
    create(0,n-1,0);
    int q;
    scanf("%d",&q);
    while(q--)
    {
              node ans;
              int i,j;
              scanf("%d%d",&i,&j);
              ans=query(i-1,j-1,0,n-1,0);
              printf("%lld\n",ans.csum);
    }
return 0;
}
