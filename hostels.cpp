#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    long long n,sum,i,j=0,max=0,sum1=0;
    scanf("%lld %lld ",&n,&sum);
    
    long long arr[n];
    for(i=0;i<n;i++)
    {
                    
               scanf("%lld",arr[i]);
               if((sum1+arr[i])<=sum )
               sum1=sum1+arr[i];
                else
                {   int k=j;
                    while(1)
                    {
                            if(j>=i)
                            break;
                            if((sum1+arr[i]-arr[j])<sum1)
                            break;
                            else
                            {
                                if((sum1+arr[i]-arr[j])>sum)
                                {                           sum1=sum1-arr[j];
                                                            j++;
                                }
                                else
                                {
                                sum1=sum1+arr[i]-arr[j];
                                break;
                                }
                            }
                    }
                }
    }

cout<<sum1<<endl;

return 0;
}
                                
                            
