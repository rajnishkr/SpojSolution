#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define LL long long
using namespace std;
LL arr1[1005],arr2[1005];
int f;
void bsh(int i,int j,LL val)
{    //cout<<i<<" "<<j<<" "<<val<<endl;
     //system("pause");
     //cout<<arr1[i]<<endl;
     LL mid;
     if(i==j)
     {
     if(arr1[i]==val)
     { //              cout<<"z"<<endl;
                     f=1;
                     return;   
     }
     else
     {   f=0;
         return ;
     }
     }
     mid=(i+j)>>1;
     if(arr1[mid]==val)
     {                 f=1;
                       return ;
     }
     else if(val>arr1[mid])
     bsh(mid+1,j, val);
     else
     bsh(i,mid-1, val);
}
int main(){

int test;
scanf("%d",&test);
while(test--)
{
  int m,n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  scanf("%lld",&arr1[i]);
  scanf("%d",&m);
  for(int i=0;i<m;i++)
  scanf("%lld",&arr2[i]);
  sort(arr1,arr1+n);
  int diff;
  bool flag;
  for(diff=0;;diff++)           
  {         flag=false;
    for(int i=0;i<m;i++)
    {        if(diff!=0)
             {
            if(arr2[i]-diff>0){
            bsh(0,n-1,arr2[i]-diff);
            if(f==1)
              {
              flag=true;
              break;
              }
              }
            }
            bsh(0,n-1,arr2[i]+diff);
            //cout<<f<<"f"<<endl;
            if(f==1)
              { //cout<<"z1"<<endl;
                flag=true;
                 break;
              }
    }
    
    if(flag)
    break;
}
printf("%d\n",diff);              
}
return 0;
}
