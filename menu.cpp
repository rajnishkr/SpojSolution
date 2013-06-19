#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int money,days,menuno;
int arr[101][2];
int vis[101][22][51][4];
bool flag;
int dp(int m,int d,int prev,int prevd,float sum)
{   cout<<m<<" "<<d<<" "<<prev<<" "<<prevd<<" "<<sum<<endl;
    system("pause");
      cout<<sum<<"s"<<endl;
       if(m<=0 && d>0)
       return -1;    
       //cout<<"x";
       if(d==0)
       return sum;
        if(prev!=-1)
        {
       if( vis[m][d][prev][prevd]!=-1)
       return  vis[m][d][prev][prevd];
       }
       
       int k=0,k1=0;
       flag=false;
       cout<<menuno<<endl;
       for(int i=0;i<menuno;i++)
       {
          if(m-arr[i][0]<0)
          continue;
          if(prev==i )
          {          if(prevd==0)
                     k=dp(m-arr[i][0],d-1,i,prevd+1,sum+(arr[i][1]/2.0));
                     else
                     k=dp(m-arr[i][0],d-1,i,prevd+1,sum);
          }
          else
           k=k=dp(m-arr[i][0],d-1,i,0,sum+arr[i][1]);
           if(k!=-1)
           flag=true;
           k1=max(k1,k);
           cout<<k<<endl;
       }
       if(flag)
       return -1;
       else
       vis[m][d][prev][prevd]=sum+k1;
       return sum+k1;
}
int main(){
  while(1){
           
    scanf("%d%d%d",&days,&menuno,&money);
    for(int i=0;i<=money;i++)
            for(int j=0;j<=days;j++)
                    for(int k=0;k<=menuno;k++)
                            for(int l=0;l<=3;l++)
                            vis[i][j][k][l]=-1;
    

    for(int i=0;i<menuno;i++)
    scanf("%d%d",&arr[i][0],&arr[i][1]);
     flag=false;
     int sum=dp(money,days,-1,0,0.0);
     if(sum==-1)
     sum=0;
    printf("%f\n",sum);
}
return 0;
}
