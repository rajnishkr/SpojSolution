#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[10000][10000];    
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
                  int req_o,req_n;
                  scanf("%d%d",&req_o,&req_n);
                  int n;
                  scanf("%d",&n);
                  //int arr[80][80];
                  int input[n][3],max_o=0,max_n=0;
                 /* for(int i=0;i<80;i++)
                  for(int j=0;j<80;j++)
                  arr[i][j]=802;   */
                    
                  for(int i=0;i<n;i++)
                  {
                          scanf("%d%d%d",&input[i][0],&input[i][1],&input[i][2]);
                          arr[input[i][0]][input[i][1]]=input[i][2];
                         
                          max_o+=input[i][0];
                          max_n+=input[i][1];
                  }
                     
                 // cout<<max_o<<" "<<max_n<<endl;
                  for(int i=0;i<n;i++)
                          for(int j=max_o;j>=input[i][0];j--)
                                  for(int k=max_n;k>=input[i][1];k--)
                                  {        if(arr[j][k]==0)
                                           arr[j][k]=arr[j-input[i][0]][k-input[i][1]] + input[i][2];
                                           else
                                          arr[j][k] = min(arr[j][k],arr[j-input[i][0]][k-input[i][1]] + input[i][2]);
                                  }
                  int min=801;
                  for(int i=req_o;i<=max_o;i++)
                  for(int j=req_n;j<=max_n;j++)
                  if(min>arr[i][j])
                  min=arr[i][j];
                  cout<<min<<endl;
                  
                  for(int i=0;i<=max_o;i++){
                  for(int j=0;j<max_n;j++)
                  cout<<arr[i][j]<<" ";
                  cout<<endl;
                  }
}
return 0;
}
