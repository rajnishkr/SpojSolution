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

int arr[1000010],cnt[1000010];

int main() {
    int i,j,n,k,val;
    priority_queue<int> pq;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    
    scanf("%d",&k);
    
    for(i=0;i<k;i++) {
             cnt[arr[i]]++;
             pq.push(arr[i]);
    }
    
    printf("%d",pq.top());
    
    i=1;
    while(((i+k)-1)<n) {
          cnt[arr[i-1]]--;
          pq.push(arr[i+k-1]);
          cnt[arr[i+k-1]]++;
          while(1) {
              val=pq.top();
              if(cnt[val]>0) { printf(" %d",val); break; }
              else pq.pop();
          }
          i++;
    }
    
    printf("\n");
    //system("pause");
    return 0;
    
}
                               
    
    
