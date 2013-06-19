#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {            
                 int n;
                 cin>>n;
                
                int **array=new int*[n];
                for(int i=0;i<n;i++) 
                {array[i]=new int[n];
                  for(int j=0;j<n;j++)
                   array[i][j]=0;
                  }
                 
                 
                 string s;
                 cin>>s;
                 while(s!="END")
                 {
                 int x1,y1,x2,y2,set,sum=0;
                 
                 if(s=="SET")
                 {
                             cin>>x1>>y1>>set;
                             array[x1][y1]=set;
                 }
                 else
                 {
                     if(s=="SUM")
                     {
                                 cin>>x1>>y1>>x2>>y2;
                                 for(int i=x1;i<=x2;i++)
                                 {
                                         for(int j=y1;j<=y2;j++)
                                         {
                                                 sum+=array[i][j];
                                         }
                                 }
                       }          cout<<sum<<endl;
                 }
                 cin>>s;
                }
                cout<<endl;
    }
    return 0;
}            
