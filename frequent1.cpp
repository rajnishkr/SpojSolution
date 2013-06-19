#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int n;
struct node{
       int i;
       int f;
       };
struct node1{
       int i;
       int f;
       int b;
       int e;
       };
node tree[6000005];
int input[1000009];
node maximum(node n1,node n2)
{
     if(n1.f>n2.f)
     return n1;
     else
     return n2;
}
node maximum1(node n1,node n2,node n3)
{
     if(n1.f>n2.f && n1.f>n3.f)
     return n1;
     else if(n3.f>n2.f)
     return n3;
     else
     return n2;
}
node1 maximum(node1 n1,node1 n2)
{
     if(n1.f>n2.f)
     return n1;
     else
     return n2;
}
node1 maximum1(node1 n1,node1 n2,node1 n3)
{
     if(n1.f>n2.f && n1.f>n3.f)
     return n1;
     else if(n3.f>n2.f)
     return n3;
     else
     return n2;
}
     
     
void create(int b,int e,int index)
{
     if(b==e)
     {
             tree[index].i=input[b];
             tree[index].f=1;
             return;
     }
     create(b,(b+e)/2,2*index+1);
     create((b+e)/2+1,e,2*index+2);
     
     if(tree[2*index+1].i==tree[2*index+2].i)
     {tree[index].i=tree[2*index+1].i;
      tree[index].f=tree[2*index+1].f+tree[2*index+2].f;
      }
      else
      {
          int mid=(b+e)/2;
          if(input[mid]!=input[mid+1])
          tree[index]=maximum(tree[2*index+1],tree[2*index+2]);
          else
          {
          int l=0,r=0,j=mid,k=input[mid];
           while(input[j]==k && j>=b && j>=0)
           j--,l++;
           j=mid+1;
           while(input[j]==k && j<=e && j<n)
           j++,r++;
           node temp;
           temp.i=input[mid];
           temp.f=l+r;
           tree[index]=maximum1(tree[2*index+1],tree[2*index+2],temp);
           }
           }
     //      cout<<b<<" "<<e<<" "<<tree[index].i<<" "<<tree[index].f<<endl;
       //    system("pause");
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
   {
   return tree[index];
    }
  else
  { node right,left; 
  left=query(i,j,b,(b+e)/2,2*index+1);
  right=query(i,j,(b+e)/2+1,e,2*index+2) ;
  if(left.f==0)
  return right;
  if(right.f==0)
  return left;
  if(left.i==right.i)
   {
     temp.f=right.f+left.f;
     temp.i=left.i;
     return temp;
     }
   else
   {
   temp=maximum(left,right);
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
