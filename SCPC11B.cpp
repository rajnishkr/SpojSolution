#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){   
   
    int n;
    cin>>n;
    while(n)
    {     
           vector<int> v;
           v.clear();
           int a,f=0,b=0;
           for(int i=0;i<n;i++)
           {
               cin>>a;
               if(a==0)
               f=1;
               if(a==1422)
               b=1;
               v.push_back(a);
           }
             if(!f)
            {v.push_back(0);
            n++;
            }
             if(!b)
            { v.push_back(1422);
             n++;
             }
              
            sort(v.begin(),v.end());
            int flag1=0,flag2=0;
            for(int i=0;i<n-1;i++)
             {
                if(v[n-1-i]-v[n-2-i]>200)
                {
                //cout<<v[n-1-i]<<" "<<v[n-2-i]<<endl;
                   flag2=1;
                   break;
                }
               if(v[i+1]-v[i]>200)
               { 
                flag1=1;
               break;
               }
             }
           if(flag1==1 || flag2==1)
           cout<<"IMPOSSIBLE\n";
           else
           cout<<"POSSIBLE\n";
          cin>>n;
          
      }
return 0;
}
