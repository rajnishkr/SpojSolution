#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int input[50001];
int seg[300001];
void create(int b,int e,int index)
{
     
     
     if(b==e)
     {
             seg[index]=input[b];
             return ;
     }
     create(b,(b+e)/2,2*index+1);
     create((b+e)/2+1,e,2*index+2);
     seg[index]=max(seg[2*index+1],seg[2*index+2]);
     return;
}
int query(int i,int j,int b,int e,int index)
{
    if(e<i || b>j)
    return 100000;
    if(i<=b && j>=e)
    return seg[index];
    int max1=query(i,j,b,(b+e)/2,2*index+1);
    int max2=query(i,j,(b+e)/2+1,e,2*index+2);
    if(max1==100000)
    return max2;
    if(max2==100000)
    return max1;
    return max(max1,max2);
            
}
int main(){
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 scanf("%d",&input[i]);
 create(0,n-1,0);
 int q;
 scanf("%d",&q);
 while(q--)
 {
           int i,j;
           scanf("%d%d",&i,&j);
           printf("%d\n",query(i-1,j-1,0,n-1,0));
 }
cin>>n;
return 0;
}
