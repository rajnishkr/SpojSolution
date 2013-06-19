#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
    int test,n,x,s,c;
    scanf("%d",&test);
    while(test--)
    {
                 int n;
                 scanf("%d",&n);
                 map<int ,int> m;
                 c=0;
                 s=0;
                 m[0]=1;
                 int flag=0;
                 for(int i=0;i<n;i++)
                 {
                         scanf("%d",&x);
                         s+=x;
                         if(m[s-47]!=0)
                         c+=m[s-47];
                        if(flag==0 && s==0)
                        flag=1;
                        else{
                         if(m[s])
                         m[s]++;
                         }
                 }
                printf("%d\n",c);
                // cout<<c<<endl;
                
}                     
return 0;
}
