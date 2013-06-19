#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int arr[1000001];
int main(){
int n;
long long sum=0;
scanf("%d",&n);
priority_queue<int> q,q1;
while(n--)
{
          int m,x;
          scanf("%d",&m);
          while(m--)
          {
                    scanf("%d",&x);
                    q.push(x);
                    q1.push(-x);
                    arr[x]++;
          }
          int temp;
          temp=q.top();
          q.pop();
          while(arr[temp]==0)
          {  temp=q.top();
             q.pop();
          }
          arr[temp]--;
          int min=temp,max;
          temp=q1.top();
          q1.pop();
           while(arr[-1*temp]==0)
          {  temp=q1.top();
             q1.pop();
          }
           arr[-temp]--; 
           max=-temp; 
         sum+=min-max;          
}
printf("%lld",sum);
return 0;
}
