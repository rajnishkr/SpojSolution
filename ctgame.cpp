#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
 int arrx[1001][1001],arry[1001][1001];
             char s[1001][1001];
int main(){
int test;
scanf("%d",&test);
while(test--)
{
             int n=0,m=0;
             scanf("%d%d",&n,&m);
             for(int i=0;i<n;i++)
             {       int j=0;
                     for(j=0;j<m;)
                     {
                               char ch=getchar();
                               if(ch=='R' || ch=='F')
                               {
                                          s[i][j]=ch;
                                          j++;
                               }
                     }
                     
             }
             /*cout<<endl;
             for(int i=0;i<n;i++){
             for(int j=0;j<m;j++)
             cout<<s[i][j]<<" ";
             cout<<endl;}
             */int ma=0;
             if(s[0][0]=='R')
             { arrx[0][0]=0;
               arry[0][0]=0;
               }
             else{
             arrx[0][0]=1;
             arry[0][0]=1;
             ma=1;
             }
             for(int i=1;i<m;i++)
             {
              if(s[0][i]=='R')
              {
                              arrx[0][i]=0;
                              arry[0][i]=0;
              }
              else
              {
                  if(arrx[0][i-1]==0)
                  {
                    arrx[0][i]=1;
                    arry[0][i]=1;
                    ma=max(ma,1);
                  }
                  else
                  {
                      arrx[0][i]=1;
                      int val=arry[0][i]=arry[0][i-1]+1;
                      ma=max(ma,val);
                  }
              }
             }
              //column
             for(int i=1;i<n;i++)
             {
              if(s[i][0]=='R')
              {
                              arrx[i][0]=0;
                              arry[i][0]=0;
              }
              else
              {
                  if(arrx[i-1][0]==0)
                  {
                    arrx[i][0]=1;
                    arry[i][0]=1;
                    ma=max(ma,1);
                  }
                  else
                  {
                      int val=arrx[i][0]=arrx[i-1][0]+1;
                      arry[i][0]=1;
                      ma=max(ma,val);
                  }
              }
             }
              for(int i=1;i<n;i++)
              {
                      for(int j=1;j<m;j++)
                      {
                              if(s[i][j]=='R')
                              {
                                     arrx[i][j]=0;
                                     arry[i][j]=0;
                              }
                              else
                              {  int x,y;
                                 if(arrx[i-1][j]>=arrx[i][j-1])
                                 x=arrx[i-1][j]+1;
                                 else
                                 x=arrx[i][j-1];
                                 if(arry[i-1][j]>arry[i][j-1])
                                 y=arry[i][j-1]+1;
                                 else
                                 y=arry[i-1][j];
                                 if(x==0 && y!=0)
                                 x=arrx[i-1][j]+1;
                                 if(y==0 && x!=0)
                                 y=arry[i][j-1]+1;
                                 
                                 arrx[i][j]=x;
                                 arry[i][j]=y;
                                  ma=max(ma,x*y);
                                  
                          }
              }
          }
          
       /*  for(int i=0;i<n;i++)
          {
                  for(int j=0;j<m;j++)
                  cout<<arrx[i][j]<<"/"<<arry[i][j]<<" ";
                  cout<<endl;
          }   */
          
          cout<<ma*3<<endl;
}  
return 0;
}
