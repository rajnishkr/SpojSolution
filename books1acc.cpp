#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
long long arr[505];
long long sum[505];
bool fn(long long mid,int k,int s,int n)
{
     int j=s-1,c=0;
//     cout<<n<<endl;
     for(int i=s;i<=n;i++)
        {   //cout<<sum[i]<<" i "<<sum[j]<<mid<<endl;
        if( (sum[i]-sum[j]) >=mid)
        {
         c++;
         j=i;
        }
       if(c>=k)
       {
        return true;
      }
    }
return false;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int n,k;
              scanf("%d%d",&n,&k);
              sum[0]=0;
              for(int i=0;i<n;i++)
              {
                      scanf("%lld",&arr[i]);
                      sum[i+1]=sum[i]+arr[i];
              }
              long long st ,ed,mid;
              st=sum[1];
              ed=sum[n];
              while(st<ed)
              {            //    cout<<st<<" "<<ed<<" "<<n<<" "<<k<<" "<<mid<<endl;
                              mid=(st+ed)/2;
                     //         cout<<mid<<edl;
                              if(fn(mid,k,1,n))
                              st=mid+1;
                              else
                              ed=mid;

              }
              int j,c;
              bool flag;
              //if(!fn(st,k,1,n))
              //st--;
              //cout<<st<<"j"<<endl;
              vector<int> v[501];
              int l=0,p;
               j=0;
              for(int i=1;i<=n;i++)
              {
              v[l].push_back(arr[i-1]);
               if(sum[i]-sum[j]>=st)
               {  j=i;
                  l++;
                  if(l>k-1)
                  l=k-1;
                  if(l==k-1)
                  continue;
                   st=0;
                   ed=sum[n]-sum[j];
                   while(st<ed)
                   {
                                   mid=(st+ed)>>1;
                                   if(fn(mid,k-l,j+1,n))
                                   st=mid+1;
                                   else
                                   ed=mid;
                   }
                  // if(!fn(st,k-l,j+1,n))
                  //st--;
                  //cout<<st<<endl;
                  if((n-i-st)/(k-l)==0)
                  st--;

               }
              
    }
              for(int i=0;i<k-1;i++)
              {for(int j=0;j<v[i].size();j++)
              printf("%d ",v[i][j]);
              printf("/ ");
              }
              for(int j=0;j<v[k-1].size();j++)
              printf("%d ",v[k-1][j]);
              printf("\n");
    }
return 0;
}
