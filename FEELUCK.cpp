#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
      int test,count=1;
      cin>>test;
       vector<int> v1,v2;
       vector<string> s,s1;
       string str,n;
       int sum=0;
       while(test--)
       {
                    cin>>str;
                    cin>>n;
                    string st1=n+str;
                    cout<<st1;
                    s.push_back(st1);
                    s1.push_back(str);
                    if(sum<n)
                    sum=n;
                    
                   
        string sp=""+n;
       printf("Case #%d:\n",count++);
       for(int i=0;i<s.size();i++)
        {        string x=c_str(st1[i]);
               if((x.find(sp)!=-1)
                cout<<s1[i]<<endl;
        }
         
         }      
       system("pause");
       return  0;             
       
       
}
