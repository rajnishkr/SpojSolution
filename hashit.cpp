#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
struct node{
       int i;
       string s1;
       };
       
string s;
string arr[105];
int hash()
{
    int sum=0;
    int l1=s.length();
    for(int i=0;i<l1;i++)
          sum=(sum+s[i]*(i+1))%101;  
    sum=(sum*19)%101;
    return sum;
}
          

int main(){
    int test;
    cin>>test;
while(test--)
{
for(int i=0;i<=101;i++)
arr[i].assign("");
int n;
cin>>n;
for(int i=0;i<n;i++)
{
string str;
cin>>str;
s=str.substr(4);
if(str[0]=='A')
{
               int h= hash(),j=1,hash1=h;
               
               while(arr[hash1].compare("")!=0 && j<20 && arr[hash1].compare(s)!=0)
               {
                   hash1=(h+j*j+23*j)%101;
                   j++;
               }
               if(j!=20)
               {   
                  arr[hash1]=s;      
               }               
}
else
{ 
    int h= hash(),j=1,hash1=h;
    
               while(arr[hash1]!="" && j<20 && arr[hash1]!=s)
               {   
                  
                   hash1=(h+j*j+23*j)%101;
                   j++;
               }
               if(j!=20)
               arr[hash1].assign("");   
               
} 
  
}   
int count=0;
vector<node> vec;
node temp;                              
for(int i=0;i<101;i++)
{
        if(arr[i]!="")
        {count++;
        temp.i=i;
        temp.s1=arr[i];
         vec.push_back(temp);
         }
}
cout<<count<<endl;
for(int i=0;i<vec.size();i++)
cout<<vec[i].i<<":"<<vec[i].s1<<endl;
}
return 0;
}
