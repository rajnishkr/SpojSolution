#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#define inf 1>>30
using namespace std;
struct node{
       float x;
       float y;
       int index;
       }; 
node input[50001];
node tempy2[50001];
node tempy1[50001];
int x,y;
bool compare(const node n1,const node n2)
{
     return n1.x>n2.x;
}
bool compare1(const node n1,const node n2)
{
     return n1.y>n2.y;
}
float divide(int i,int j)
{     cout<<i<<" "<<j<<endl;
      system("pause");
      float dis_min,dist;
      if(i==j)
      {
              x=input[i].index;
              y=input[i].index;
              return 100000.0;
      }
      else{
           if(j-i==1)
           {
                     x=input[i].index;
                     y=input[j].index;
                     float dis=sqrt(pow((input[i].x-input[j].x),2)+pow((input[i].y-input[j].y),2));
                     x=i;
                     y=j;
                     return dis;
           }
           else
           {
               
               float left=divide(i,(i+j)/2) ;
               float right=divide((i+j)/2+1,j);
               cout<<":";
               int k=0;
               for(int j1=i;j1<=(i+j)/2;j1++)
               {tempy1[k].x=input[j1].x;
               tempy1[k].y=input[j1].y;
               tempy1[k++].index=input[j1].index ;
               }
               sort(tempy1,tempy1+(i+j)/2-i+1,compare1);
               k=0;
               cout<<"::";
               for(int j1=(i+j)/2;j1<=j;j1++)
               {tempy2[k].x=input[j1].x;
               tempy2[k].y=input[j1].y;
               tempy2[k++].index=input[j1].index ;
               }
               sort(tempy2,tempy2+j-(i+j)/2+1,compare1);
               int i1=0,i2=i,j2=(i+j)/2+1;
               int j1=0;
                
               dis_min=min(left,right);
                cout<<"::3";
               while (i2<=(i+j)/2  j2<=j)
               {           cout<<":4";
                dist=sqrt(pow((tempy1[i1].x-tempy2[j1].x),2)+pow((tempy1[i1].y-tempy2[j1].y),2));
               if( dist < dis_min)
               {   x=tempy1[i1].index;
                   y=tempy2[j1].index;
                   dis_min=dist;
                   }
               if (tempy1[i1].y <= tempy2[j1].y)
               {
                               if(j2+1<=j)
                               {
                                  dist=sqrt(pow((tempy1[i1].x-tempy2[j1+1].x),2)+pow((tempy1[i1].y-tempy2[j1+1].y),2)); 
                                  if (dist < dis_min)
                                  {
                                           x=tempy1[i1].index;
                                           y=tempy2[j1+1].index;
                                           dis_min=dist;
                                           j1++;
                                           j2++;
                                  }
                               }
               }
               else if (i2+1<=(i+j)/2)
               {
               dist=sqrt(pow((tempy1[i1+1].x-tempy2[j1].x),2)+pow((tempy1[i1+1].y-tempy2[j1].y),2)); 
                                  if (dist < dis_min)
                                  {
                                           x=tempy1[i1+1].index;
                                           y=tempy2[j1].index;
                                           dis_min=dist;
                                           i1++;
                                           i2++;
                                  }        
               }
           }
}
}
 return dis_min;
 }   
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
            {scanf("%f%f",&input[i].x,&input[i].y);
             input[i].index=i;
             } 
    sort(input,input+n,compare);
    float min_dist=divide(0,n-1);
    if(x<y)
    printf("%d %d %f/n",x,y,min_dist);
    else
    printf("%d %d %f/n",y,x,min_dist);
return 0;
}
