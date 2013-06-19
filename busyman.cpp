#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
struct node{
       int start;
       int end;
       };
bool comapare(const node n1,const node n2)
{
     return n1.end<n2.end || (n1.end==n2.end && n1.start<n2.start);
}       
vector<node> vec(10007);
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
                 int len,i,n,x,count,y;
                 node temp;
                 scanf("%d",&n);
                 for( i=0;i<n;i++)
                 {
                         scanf("%d%d",&x,&y);
                         temp.start=x;
                         temp.end=y;
                         vec[i]=temp;
                 }
                 //vec.resize(n);
                 sort(vec.begin(),vec.begin()+n,comapare);
                 count=1;
                 x=vec[0].end;
                 i=1;
                 len=vec.size();
                 while(i<len){
                              
                              while(vec[i].start<x && i<len)
                              i++;
                              if(i==len)
                              break;
                              else
                              {
                                  count++;
                                  x=vec[i].end;
                              }
                              i++;
                 }
                 cout<<count<<endl;
    }
return 0;
}
