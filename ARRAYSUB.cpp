#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[1000001];
int seg[6000001];
void create_seg(int b,int e,int index)
{     //cout<<b<<" "<<e<<endl;
      //system("pause");
     if(b==e)
     {seg[index]=arr[b];
     return ;
     }
     create_seg(b,(b+e)/2,2*index+1);
     create_seg((b+e)/2+1,e,2*index+2);
     seg[index]=max(seg[2*index+1],seg[2*index+2]);
     
     return;
}
int query(int i,int j,int b,int e,int index)
{
    if(e<i || b>j)
    return -1;
    if(i<=b && j>=e)
    return seg[index];
    return max(query(i,j,b,(b+e)/2,2*index+1),query(i,j,(b+e)/2+1,e,2*index+2));
}
int main(){
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    create_seg(0,n-1,0);
    scanf("%d",&k);
    for(int i=0;i<=n-k;i++)
    printf("%d ",query(i,i+k-1,0,n-1,0));
    cin>>k;     
return 0;
}
