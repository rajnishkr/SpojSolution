 #include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int arr[200001];
int co[200001];
long long c;
void merge(int i,int mid,int j)
{
     int p=i,q=mid+1;
     int index=0;
     while(i<=mid && q<=j)
     {
                if(arr[i]<=arr[q])
                 co[index++]=arr[i++];
                 else
                 {
                     c+=mid-i+1;
                     co[index++]=arr[q++];
                 }
     }
     while(i<=mid)
     co[index++]=arr[i++];
     while(q<=j)
     co[index++]=arr[q++];
     for(int i1=0;i1<index;i1++)
     arr[p+i1]=co[i1];
     return;
}
void merge_sort(int i,int j){
     if(i>=j)
     return;
     merge_sort(i,(i+j)/2);
     merge_sort((i+j)/2+1,j);
     merge(i,(i+j)/2,j);
     return;
     }     
int main(){
    int l;
    cin>>l;
    while(l--)
    {
              int n;
              scanf("%d",&n);
              if(n==0)
              break;            
              for(int i=0;i<n;i++)
              cin>>arr[i];
              c=0;
              merge_sort(0,n-1);
              printf("%lld\n",c);
    }
return 0;
}
