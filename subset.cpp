using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>

bool a[34]={false};
int arr[34];
int n,k,c1=0;

void process();
void backtrack(int k1)
{
  if(k1==n-1)
    process();
   else
   {
    k1++;
    bool c[]={false,true};
    for(int i=0;i<2;i++)
    {
       a[k1]=c[i];
       backtrack(k1);
     }
   }
}

void process()
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    if(a[i])
    { 
            sum+=arr[i]; 
    }
    
  }

  if(sum==k)
   c1=c1+1;
  
}
int main()
{
    
int tes;
cin>>tes;
while(tes--)
{
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
cin>>k;
backtrack(-1);
cout<<c1<<endl;
}
return 0;
}

