#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int array[40005]={0};
int main(){
vector<int> vec;

for(int i=2;i<40000;i++)
{
        while(array[i]!=0 && i<40000)
        i++;
        
        vec.push_back(i);
        int k=i+1;
        while(k<40000)
        { int c=0;
          while(c!=i)
          {             //cout<<c<<" "<<k<<" "<<i<<endl,system("pause");
          
                     if(array[k]==0)
                     c++;
                     k++;
                     if(k>=40000)
                     break;
          }
          array[k-1]=-1;
        }
}
//for(int i=0;i<vec.size();i++)
//cout<<vec[i]<<" ",system("pause");
while(1)
{
        int n;
        scanf("%d",&n);
        if(n==0)
        break;
        printf("%d\n",vec[n-1])  ;
        }
return 0;
}
