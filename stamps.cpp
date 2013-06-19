#include<vector>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
    int test,k=1;
    cin>>test;
    while(test--)
    {
                 vector<int> stamps;
                 stamps.clear();
                 int req,frnd,c=0,count=0,a;
                 cin>>req>>frnd;
                 
                 for(int i=0;i<frnd;i++)
                 {
                          cin>>a;
                          stamps.push_back(a);
                 }
                 sort(stamps.begin(),stamps.end());
                 int sum=0;
                for(int i=frnd-1;i>=0;i--)
                {
                       sum+=stamps[i];
                       count++;
                      if(sum>=req)
                      {   c=1;
                         break;
                      }
                    
                         
                      
                } 
                printf("Scenario #%d:\n",k++); 
                if(c)
                      printf("%d\n\n",count);
                else
                    printf("impossible\n\n");
                                       
    }
    
    return 0;
}
