#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
int main() {
vector <int>  vec[10];
for(int i=0;i<10;i++)
vec[i].push_back(i);
int k=0,j=0;
for(int i=2;i<10;i++)
{j=2;
k=((int)pow(vec[i][0],(float)j))%10;
while(k!=vec[i][0])
{vec[i].push_back(k);
j++;
k=((int)pow(vec[i][0],(float)j))%10;
}
}
int test;
cin>>test;
while(test--)
{
long long a,b,c,s;
 cin>>a>>b;
if(a==0 && b==0)
cout<<1<<endl;
else
{ if(a==0)
cout<<0<<endl;
else {
if(b==0)
cout<<1<<endl;
else
{
c=a%10;
s=vec[c].size();
k=b%s;
if(k!=0)
cout<<vec[c][k-1]<<endl;
 else
cout<<vec[c][s-1]<<endl;
}
}
}
}
return 0;
}
                 
                      
