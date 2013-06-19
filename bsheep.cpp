#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#define long long LL
using namespace std;
struct node{
       int x,y;
       int index;
       };
bool compare(const node n1,const node n2)
{
     return (n1.y<n2.y) || (n1.y==n2.y && n1.x<n2.x) || (n1.x==n2.x && n1.y==n2.y && n1.index>n2.index);
}
int crossproduct(const node a,const node b,const node c)
{
    return (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);
}       

int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
      int n,x,y,i;
      scanf("%d",&n);
      node arr[n];
      for(i=0;i<n;i++)
      {
                  scanf("%d%d",&arr[i].x,&arr[i].y);
                  arr[i].index=i+1;
      }
      sort(arr,arr+n,compare);
      //for(i=0;i<n;i++)
      //cout<<arr[i].x<<" "<<arr[i].y<<endl;
      vector<node> v(2*n);
      int k=0,t; 
      for( i=0;i<n;i++)
      {        bool flag=1;
              while(k>=2 && crossproduct(v[k-2],v[k-1],arr[i])<=0)
              {
              //if(crossproduct(v[k-2],v[k-1],arr[i])==0)
              if(v[k-1].index>arr[i].index)
              {v[k-1]=arr[i];
               flag=0;
              break;
              }
              k--;
           } 
            if(flag)
              v[k++]=arr[i];
      } 
      t=k+1;
      for(i=n-2;i>=0;i--)
      {       bool flag=1;
               //if(crossproduct(v[k-2],v[k-1],arr[i])==0)
              while(k>=t && crossproduct(v[k-2],v[k-1],arr[i])<=0)
              {
              if(v[k-1].index>arr[i].index)
              {v[k-1]=arr[i];
              flag=0;
              break;
              }
              k--;
           } 
            if(flag)
              v[k++]=arr[i];
      }
      v.resize(k);
      vector<int> ind;
      double x_dis,y_dis,distance=0;  
      int j;
      ind.push_back(v[0].index);
      for(int i=0;i<k;i++)
      cout<<v[i].x<<" "<<v[i].y<<endl; 
      if(v.size()==5)
      {
          for(i=0;i<k-1;i++)
          {
      x_dis=pow(v[i+1].x-v[i].x,2.0);
      y_dis=pow(v[i+1].y-v[i].y,2.0);
      distance=max(distance,sqrt(x_dis+y_dis));   
      } 
      }
      else
      {        
      for(j=0;j<k;j++)
      {
      for(int l=0;l<k-1;l++)
      {
             // i=(j+1+l)%k;
      //ind.push_back(v[i].index);
       x_dis=pow(v[j].x-v[l].x,2.0);
      y_dis=pow(v[j].y-v[l].y,2.0);
      distance=max(distance,sqrt(x_dis+y_dis));
      }
      }
      }
      printf("%.10f\n",distance);
      /*printf("%d",ind[0]);
      for(i=1;i<ind.size()-1;i++)
      printf(" %d",ind[i]);
      printf("\n\n");  */
}                  
return 0;
}
