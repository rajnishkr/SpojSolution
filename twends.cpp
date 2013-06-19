#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
int arr[1001][1001];
int input[1001];
int n;
int rec(int i,int j){
   
    if(i>j)
    return 0;
    if(i==j)
    return input[i];
    if(j-i==1)
    return max(input[i],input[j]);
    if(arr[i][j])
    return arr[i][j];
    
    int i1=i+1,j1=j,i2=i,j2=j-1;
    
    if(input[i1]>=input[j1])
    i1++;
    else
    j1--;
    
    if(input[i2]>=input[j2])
    i2++;
    else
    j2--;
    arr[i][j]=max(input[i]+rec(i1,j1),input[j]+rec(i2,j2));
    return arr[i][j];
}    
int main(){
    int l=1;
    while(1)
    {
            scanf("%d",&n);
            if(n==0)
            break;
            memset(arr, 0, sizeof(arr));
            int sum=0;
            for(int i=0;i<n;i++)
            {
                    scanf("%d",&input[i]);
                    sum+=input[i];
            }
            int k=rec(0,n-1);
            
            //cout<<k<<endl;
            printf("In game %d, the greedy strategy might lose by as many as %d points.\n",l++,(2*k-sum));
    }
return 0;
}
