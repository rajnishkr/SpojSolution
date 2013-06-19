#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int test;
    scanf("%d",&test);
    while(test--)
    {            string str[3];
                 getline(cin,str[0]);
                 int mat[3][3]={0},countx=0,counto=0;
                 for(int i=0;i<3;i++)
                  getline(cin,str[i]);
                  for(int j=0;j<3;j++)
                  {
                    for(int i=0;i<str[j].length();i++)
                    {
                            if(str[j][i]=='X')
                                  {
                                  mat[j][i]=7;
                                  countx++;
                                  }
                            else { 
                                 if(str[j][i]=='O')
                                 {
                                 mat[j][i]=1;
                                 counto++;
                                 }
                                   else
                                  mat[j][i]=0;
                                  }
                                  
                    }
                  }
                  int count =countx-counto;
                  int sumx[8]={0},sumo[8]={0},b=0;
                  int k=0;
                      for(int i=0;i<3;i++)
                       {
                                for(int j=0;j<3;j++)
                                  { if(mat[i][j]==7)
                                    sumx[i]+=7;
                                    else  {
                                    if(mat[i][j]==1)
                                    sumo[i]++;
                                           }
                                    if(mat[j][i]==7)
                                    sumx[i+3]+=7;
                                    else {
                                    if(mat[j][i]==1)
                                     sumo[i+3]+=1;
                                          }
                                     if(i==j)
                                     {
                                     if(mat[i][j]==7)
                                     sumx[6]+=7;
                                     else  { 
                                          if(mat[i][j]==1 )
                                           sumo[6]+=1;
                                           }
                                     } 
                                     else 
                                     {
                                       if((i+j)==2)
                                        {
                                       if(mat[i][j]==7)
                                       sumx[7]+=7;
                                        else {
                                         if(mat[i][j]==1)
                                         sumo[7]+=1;
                                         
                                            }
                                        }
                                      }
                       }             
                  }
                  int flagx=0,flago=0;
                  for(int i=0;i<8;i++)
                  {
                          if(sumx[i]==21)
                            flagx=1;
                          if(sumo[i]==3)
                             flago=1;
                 }

                  if(flagx==1 && flago==1)
                  cout<<"no\n";
                  else
                  {
                      if(flagx==1)
                      {
                                  if(count==1)
                                  cout<<"yes\n";
                                  else
                                  cout<<"no\n";
                      }
                      else 
                      { if(flago==1)
                         {
                                 if(count==0)
                                  cout<<"yes\n";
                                  else
                                  cout<<"no\n"; 
                          }
                          
                          else
                          { 
                              if(count==1 || count==0)
                              cout<<"yes\n";
                              else
                              cout<<"no\n";
                          }
                      }
                  }       
                  
                 /*for(int i=0;i<3;i++)
                 {for(int j=0;j<3;j++)
                  cout<<mat[i][j]<<" ";
                  cout<<endl;
                  }
                  for(int i=0;i<8;i++)
                   cout<<sumx[i]<<" "<<sumo[i]<<endl;
                                                         */
      }
      return 0;
      }                                    
