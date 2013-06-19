#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int input[2005];
int n;
int scearch(int j,int val)
{ int start=j+1,end=n-1,mid;
  while(start<end)
  {
                  mid=(start+end)>>1;
                  //cout<<mid<<endl;
                 // system("pause");
                  if(input[mid]==val)
                  {
                                     while(input[mid+1]==val)
                                     mid++;
                                     return mid;
                  }
                  else
                  if(input[mid]>val)
                  end=mid;
                  else
                  start=mid+1;
  }
  return end;
}
      
    
int main(){

int i,j,k,sum;
while(1)
{        sum=0;
        scanf("%d",&n);
        if(n==0)
        break;
        for( i=0;i<n;i++)
        scanf("%d",input+i);
        sort(input,input+n);
        for( i=0;i<n-1;i++)
        {
                for( j=i+1;j<n;j++)
                {       
                        int m=input[i]+input[j];
                        //cout<<m<<" m"<<endl;;
                         if(m>input[n-1])
                         continue;
                         k=scearch(j,m);
                         //cout<<k<<endl;
                        if(input[k]==m)
                        sum+=n-k-1;
                        else
                        sum+=n-k;
                      //  cout<<sum<<"s"<<endl;
                        
                }
        }
        printf("%d\n",sum);
        }
return 0;
}
