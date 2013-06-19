#include<iostream>
#include<cstdio>
#include<algorithm>
#define LL long long
#include<vector>
#include<stack>
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
    string s;
    vector<long long> vec,vec1;
    getline(cin,s);
    int    i=0;
    LL sum=0,k,pro=1;
    while(i!=s.length())
    {    k=0;
        while(isdigit(s[i]))
        {
               k=k*10+(s[i]-'0');
               i++;
               if(i==s.length())
               break;
        }
        if(i==s.length())
        break;
      //cout<<"k"<<k<<endl;
        
        if(s[i]=='+')
        {
                     sum+=k;
                     pro*=k;
                     vec1.push_back(pro);
                     pro=1;
        }
        else
        {   pro*=k;
            sum+=k;
            vec.push_back(sum);
    //        cout<<sum<<"s"<<pro<<endl;
            sum=0;
        }
        i++;
    }
  //  cout<<sum<<" "<<k<<pro<<endl;
    vec.push_back(sum+k);
    vec1.push_back(pro*k);
    sum=1;
    pro=0;
     for(int j=0;j<vec.size();j++)
             sum*=vec[j];
     for(int j=0;j<vec.size();j++)
            pro+=vec[j];     
          
     LL sum1=max(sum,pro),pro2=min(sum,pro);
     cout<<sum1<<" "<<pro2<<endl;
         
     }
return 0;
}
