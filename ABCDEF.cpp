#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int k=0,l=0 ;
vector<int> v1;
vector<int> v2;
int val1,val2,val3;
for(int i=0;i<n;i++)
{  val1=arr[i];
for(int j=0;j<n;j++)
        { val2=arr[j];
        for(int k1=0;k1<n;k1++)
                {   val3=arr[k1];
                     v1.push_back((val1*val2)+val3);
                   //map1[(val1*val2)+val3]++;
                   if(val1!=0)
                   v2.push_back(val1*(val2+val3));
                   //map2[val1*(val2+val3)]++;
                    
                }
        }
}
 sort(v2.begin(),v2.end());
 sort(v1.begin(),v1.end());
 int n1=v1.size(),m1=v2.size();
 int i=0,j=0,i1,j1;
 int count=0;
 while(i<n1 && j<m1)
 {
  if(v1[i]==v2[j]){
  i1=i,j1=j;
  i++;j++;
  while(v1[i-1]==v1[i] && i<n1)
   i++;
  while(v2[j-1]==v2[j] && j<m1) 
  j++;
  count+=(i-i1)*(j-j1);
  }
  else if(v1[i]<v2[j]) i++;
  else j++;
  }
 printf("%d",count);
//system("pause");
return 0;

}
                  
                                  
                    
    
    
