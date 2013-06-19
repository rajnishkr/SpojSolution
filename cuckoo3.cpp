#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> h1,h2,table;
int r,status[10000];
int s,initial;
int collision(int temp)
{   
   int temp1;
    if(status[temp]==1)
    {
             temp1=table[h2[temp]];
            table[h2[temp]]=temp;
            status[temp]=2;
        
      }
      else
      {      temp1=table[h1[temp]];
            table[h1[temp]]=temp;
            status[temp]=1;
       }
      /* for(int j=0;j<table.size();j++)
         cout<<table.at(j)<<" ";
         cout<<endl;*/
       if(initial==temp1 && status[temp1]==s)
        {r=0;
         return 0;
       }
     if(status[temp1]==1)
     {
        if(table[h2[temp1]]==-1){
            table[h2[temp1]]=temp1;
             status[temp1]=2;
             return 0;
             }
        else
            collision(temp1);
     }
     else
      {
             if(table[h1[temp1]]==-1)
              {
               table[h1[temp1]]=temp1;
               status[temp1]=1;
               return 0;
              }
              else
               collision(temp1);
      }
                   
    return 0;
}

int main(){
    int m,n,test;
    scanf("%d",&test);
    while(test--)
    {            h1.clear();
                 h2.clear();
                 table.clear();
                 int x,y;
                 r=1;
                 scanf("%d%d",&m,&n);
                 for(int i=0;i<m;i++)
                 { 
                         scanf("%d%d",&x,&y);
                         h1.push_back(x);
                         h2.push_back(y);
                         status[i]=1;
                 }
                 for(int i=0;i<n;i++)
                 table.push_back(-1);
                 for(int i=0;i<m;i++)
                 {
                         if(table[h1[i]]==-1)
                            {table[h1[i]]=i;
                            status[i]=1;
                            }
                          else                            
                          {
                              if(table[h2[i]]==-1)
                                    {table[h2[i]]=i;
                                     status[i]=2;
                                     }
                              else
                                 {   
                                     //int temp=table[h1[i]];
                                       //  table[h1[i]]=i;
                                       s=status[i],initial=i;
                                         collision(i);
                                        if(r==0)
                                         break;
                                 }
                              }
                  }
                  if(r==1)
                  printf("successful hashing\n");
                  else
                  printf("rehash necessary\n");
                  
                  }     
     return 0;
}                 
