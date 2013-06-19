#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

long long arr[500001]={0};
int main(){
    set<int> s;
    arr[0]=0;
    arr[1]=1;
    s.insert(0);
    s.insert(1);
    for(int i=2;i<500001;i++)
    {
            arr[i]=arr[i-1]-i;
            if( arr[i]<=0 || s.count(arr[i])>0 )
            arr[i]=arr[i-1]+i;
            
            s.insert(arr[i]);
    }
    
    int k;
    scanf("%d",&k);
    while(k!=-1)
    {
                cout<<arr[k]<<endl;
                  scanf("%d",&k);
    }
    return 0;
}
