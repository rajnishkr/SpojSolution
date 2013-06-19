#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int n;
struct node{
       int left;
       int right;
       int f;
       };
node tree[600005];
int input[100009];  
void create(int b,int e,int index)
{
     if(b==e)
     {
             tree[index].left=1;
             tree[index].f=1;
             tree[index].right=1;
             return;
     }
     int l=2*index+1,r=2*index+2,mid=(b+e)/2;
     create(b,mid,l);
     create(mid+1,e,r);
     
     if(input[b]==input[mid+1])
     tree[index].left=tree[l].left+tree[r].left;
     else
     tree[index].left=tree[l].left;
     
     if(input[e]==input[mid])
     tree[index].right=tree[r].right+tree[l].right ;
     else
     tree[index].right=tree[r].right;
     
     if(input[mid]==input[mid+1])
     tree[index].f=max(max(tree[l].f,tree[r].f),tree[l].right+tree[r].left);
     else
     tree[index].f=max(tree[l].f,tree[r].f);
     return ;
     
}          
node query(int i,int j,int b,int e,int index)
{
    node temp;
    if(j<b || i>e)
    {
           temp.f=0;
           return temp;
    }
   if(i<=b && e<=j)
   return tree[index];
  else
  { node l,r;
    int lf,rt,mid;
    lf=2*index+1;
    rt=2*index+2;
    mid=(b+e)/2;
    l=query(i,j,b,mid,lf);
    r=query(i,j,mid+1,e,rt);
    if(l.f==0)
    return r;
    if(r.f==0)
    return l;
    else
    {
     if(input[b]==input[mid+1])
     temp.left=l.left+r.left;
     else
     temp.left=l.left;
     
     if(input[e]==input[mid])
     temp.right=r.right+l.right;
     else
     temp.right=r.right;
     
     if(input[mid]==input[mid+1])
     temp.f=max(max(l.f,r.f),l.right+r.left);
     else
     temp.f=max(l.f,r.f);
      return temp; 
    }
   } 
}
   
              
int main(){
    int q;
    while(1)
    {
    scanf("%d",&n);
    if(n==0)
    break;
    scanf("%d",&q);
    for(int i=0;i<n;i++)
    scanf("%d",&input[i]);
    create(0,n-1,0);
    while(q--)
    {
              int i,j;
              scanf("%d%d",&i,&j);
              node temp=query(i-1,j-1,0,n-1,0);
              printf("%d\n",temp.f);
    }
}
return 0;
}
