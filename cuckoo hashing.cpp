#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> h1,h2,table;
int r,status[10000];

int collision(int temp)
{    cout<<"status temp "<<status[temp]<<" "<<temp<<endl;
    int s=status[temp],initial=temp;
    if(status[temp]==1)
    {
        if(table.at(h2.at(temp))==-1)
        { table.at(h2.at(temp))=temp;
           status[temp]=2;
            return 0;
         }
        else
         {
           int temp1=table.at(h2.at(temp));
            table.at(h2.at(temp))=temp;
            temp=temp1;
          }
      }
      else
      {
       if(table.at(h1.at(temp))==-1)
          { table.at(h1.at(temp))=temp;
           status[temp]=1;
           return 0;
           }
       else
          {
           int temp1=table.at(h1.at(temp));
            table.at(h1.at(temp))=temp;
            temp=temp1;
            }
       }
        for(int j=0;j<table.size();j++)
        cout<<table.at(j)<<" ";
         cout<<endl<<temp<<endl;
         //system("pause");
       if(initial==temp && status[temp]==s)
        {r=0;
         return 0;
       }
       else
        return collision(temp);
    
    return 0;
}

int main(){
    int m,n,test;
    scanf("%d",&test);
    while(test--)
    {            int x,y;
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
                         if(table.at(h1.at(i))==-1)
                            {table.at(h1.at(i))=i;
                            status[i]=1;
                            }
                          else                            
                          {
                              if(table.at(h2.at(i))==-1)
                                    {table.at(h2.at(i))=i;
                                     status[i]=2;
                                     }
                              else
                                 {   
                                     int temp=table.at(h1.at(i));
                                         table.at(h1.at(i))=i;
                                        for(int j=0;j<n;j++)
                                      cout<<table.at(j)<<" ";
                                       cout<<endl<<temp<<endl;
                                      //system("pause");
                                         collision(temp);
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
