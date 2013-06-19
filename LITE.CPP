#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define MAX 100000000
struct{
int flag;
int on;
}arr[MAX];

int query(int ind,int s,int e,int i,int j)
{
    if(i>e || j<s)
    return 0;
    if(arr[ind].flag)
    {

        if(arr[ind].flag%2!=0)
        arr[ind].on=(e-s+1)-arr[i].on;
        arr[2*ind+1].flag+=arr[ind].flag;
        arr[2*ind+2].flag+=arr[ind].flag;
        arr[ind].flag=0;


    }
    if(ind==s && j==e)
    return arr[ind].on;
    else
    {
        int m= (s+e)/2;
        if(s<=i && j<=m)
        return query(2*ind+1,s,m,i,j);
        else
        {
        if(i<=m)
        return query(2*ind+1,s,m,i,m)+query(2*ind+2,m,e,m,j);
        else
        return query(2*ind+2,m,e,i,j);
        }

    }

}
int update(int ind ,int s,int e,int i,int j)
{
    if(i>e || j<s)
    return ;
    if(ind==s && j==e)
    {
        arr[ind].flag++;
        if(arr[ind]%2!=0)
        arr[ind].on=(e-s+1)-arr[i].on;
        arr[2*ind+1].flag+=arr[ind].flag;
        arr[2*ind+2].flag+=arr[ind].flag;
        arr[ind].flag=0;
        return arr[i].on;
    }

    int m=(s+e)/2;
    arr[2*i+1].on=update(2*i+1,s,m,i,j);




}

int main(){
int main(){
int n,m;
cin>>n>>m;
update(0,0,n-1);



for()
}
