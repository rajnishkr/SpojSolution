#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;                                                                                        
int main(){
    string s;
    vector<int> v;
    for(int i=0;i<5;i++)
    {
            cin>>s;
            int k =s.find("FBI");
             if(k!=-1)
             v.push_back(i+1);
   }
   if(v.empty())
   cout<<"HE GOT AWAY!";
   else
    {
             for(int i=0;i<v.size();i++)
              cout<<v[i]<<" ";
             }
   //system("pause");
   return 0;
}
