#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>

using namespace std;
int arr[500002];
int sol[500002]={0};
int sq[500002];
int main(){
    
    int n,max=0,pos;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            scanf("%d",&arr[i]);
            if(arr[i]>max)
            {max=arr[i];
            pos=i;
            }
            sq[i]=ceil(sqrt(i));
    }
    sq[0]=0;
    int k;
    float ans1,ans2;
    for(int i=1;i<=n;i++)
    {        if(pos>i)
             sol[i]=arr[pos]-arr[i]+sq[pos-i];
             else
             sol[i]=arr[pos]-arr[i]+sq[i-pos];
            for(int j=i+pos;j<=n;j++)
            {       
                    
                    ans1=arr[j]-arr[i]+sq[j-i];
		           ans2=arr[i]-arr[j]+sq[j-i];
                    if(ans1>sol[i])
                    sol[i]=ans1;
                    if(ans2>sol[j])
                 sol[j]=ans2;
                    
                   // if(ans1>sol[j])
                    //sol[j]=ans1;
                    //cout<<ans1<<endl;
                    //system("pause");
                    //cout<<endl;
                   
            }
            cout<<sol[i]<<endl;
    }
// cin>>ans2;
    return 0;
    
   }
    
    

