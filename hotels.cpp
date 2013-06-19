#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[300007];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int first=0,end=1,ma,sum=arr[0];
    ma=arr[0]>m?0:arr[0];
    for(int i=1;i<n;i++)
    {       sum+=arr[i];
            if(sum>m)
            {  
              while(sum>m && first<=i)
              {sum-=arr[first];
              first++;
              }
            }
            if(sum==m)
            {         ma=m;
                      break;
            }
            ma=max(ma,sum);
    }
    printf("%d",ma);
    cin>>n;
return 0;
}
