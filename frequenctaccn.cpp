using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>

# define PI 3.14159265

struct t_st {
     int lfreq;
     int rfreq;
     int freq;
}tree[1000100];

int arr[1000100];

void build(int node,int a,int b) {
     int mid,left,right;
     mid=(a+b)/2;
     left=2*node;
     right=left+1;
     
     if(a==b) {
          tree[node].lfreq=1;
          tree[node].rfreq=1;
          tree[node].freq=1;
          return;
     }
     
     build(left,a,mid);
     build(right,mid+1,b);
     
     if(arr[a]==arr[mid+1]) tree[node].lfreq=tree[left].lfreq+tree[right].lfreq;
     else tree[node].lfreq=tree[left].lfreq;
     
     if(arr[b]==arr[mid]) tree[node].rfreq=tree[right].rfreq+tree[left].rfreq;
     else tree[node].rfreq=tree[right].rfreq;
     
     if(arr[mid]==arr[mid+1]) tree[node].freq =  max(max(tree[left].freq,tree[right].freq),tree[left].rfreq+tree[right].lfreq);
     else tree[node].freq =  max(tree[left].freq,tree[right].freq);
     return;
}
     
t_st query(int node,int a,int b,int i,int j) {
     int mid,left,right;
     mid=(a+b)/2;
     left=2*node;
     right=left+1;
     
     if(i<=a && j>=b) return tree[node];
     
     if(j<=mid) return query(left,a,mid,i,j);
     else if(i>mid)  return query(right,mid+1,b,i,j);
     
     else {
          t_st p1,p2,p3;
          p1=query(left,a,mid,i,j);
          p2=query(right,mid+1,b,i,j);
          
          if(arr[a]==arr[mid+1]) p3.lfreq=p1.lfreq+p2.lfreq;
          else p3.lfreq=p1.lfreq;
     
          if(arr[b]==arr[mid]) p3.rfreq=p2.rfreq+p1.rfreq;
          else p3.rfreq=p2.rfreq;
     
          if(arr[mid]==arr[mid+1]) p3.freq =  max(max(p1.freq,p2.freq),p1.rfreq+p2.lfreq);
          else p3.freq =  max(p1.freq,p2.freq);
          return p3;
     }
}

int main() {
    int n,q,i,x,y;
    while(scanf("%d",&n)) {    
         if(!n) break;
         
         scanf("%d",&q);
         
         for(i=0;i<n;i++) scanf("%d",&arr[i]);
         
         build(1,0,n-1);
         
         //for(i=1;i<=10;i++) cout<<tree[i].freq<<endl;
         
         for(i=0;i<q;i++) {
              scanf("%d %d",&x,&y);
              printf("%d\n",query(1,0,n-1,x-1,y-1).freq);
         }
    }
    return 0;
    
}
                          
                  
    
          
     
     
     
     
     



   
