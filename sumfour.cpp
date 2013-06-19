#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> a,b;
int arr1[4003],arr2[4003],arr3[4003],arr4[4003],n;
/*int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
} */

int main(){
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d%d%d%d",&arr1[i],&arr2[i],&arr3[i],&arr4[i]);
    
    int len=0;
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    a.push_back(arr1[i]+arr2[j]);
                    b.push_back(arr3[i]+arr4[j]);
            }
    }
    //qsort(a,len,sizeof(int),compare);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    len=a.size();
    
    int t=0,sum=0,start,end,mid,x,i,j;
    for(i=0;i<len;i++)
    {        x=-1*b[i];
           start=0;
           end=len-1;
            while(start<=end)
            {
                            mid=(start+end)>>1;
                            if(a[mid]==x)
                            { 
                                             t++;
                                              j=mid+1;
                                             while(j<len && a[j]==x)
                                             t++,j++;
                                             j=mid-1;
                                             while(j>=0 && a[j]==x)
                                             t++,j--;
                                             break;
                            }
                            else if(a[mid]>x)
                            end=mid-1;
                            else
                            start=mid+1;
     }
     sum+=t;
     while(b[i+1]==b[i] && i<len-1)
     i++,sum+=t;
     t=0;
    }
    printf("%d",sum);
    cin>>sum;
return 0;
}

