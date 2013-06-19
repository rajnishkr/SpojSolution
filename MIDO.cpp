#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main(){
    
    int n;
    scanf("%d",&n);
    int goal[3]={0};
    int team,mm,ss,tt,j=0,k=0,lastgoal=0,sum1=0,sum2=0,lastlead=0;
    string s;
    for(int i=0;i<n;i++)
    {
            
         scanf("%d",&team);
         cin>>s;
         mm=(int)(s[0]-'0')*10+(int)(s[1]-'0');
         ss=(int)(s[3]-'0')*10+(int)(s[4]-'0');
         tt=mm*60+ss;
         goal[team]++;
         if(goal[1]>goal[2])
         {                            if(lastlead==1)
                                      sum1=sum1+tt-lastgoal;
                                      else
                                      {   
                                          lastlead=1;
                                          }
         }
    
         else
         {
               if(goal[2]>goal[1])
               {if(lastlead==2)
               sum2+=tt-lastgoal;
               else
               lastlead=2;
               }
               else
               {
                   if(lastlead==1)
                   sum1+=(tt-lastgoal);
                   if(lastlead==2)
                   sum2+=(tt-lastgoal);
                   lastlead=0;
               }
               
         }
         lastgoal=tt;
         //cout<<sum1<<" "<<sum2<<endl;
    }
    tt=47*60+60;
    if(lastlead==1)
    sum1=sum1+(tt-lastgoal);
    else
    {
        if(lastlead==2)
        sum2=sum2+(tt-lastgoal);
}
    if(sum1/60<10)
     printf("0%d:",sum1/60);
    else
     printf("%d:",sum1/60);
    if(sum1%60<10)
     printf("0%d\n",sum1%60);
    else
     printf("%d\n",sum1%60);
     if(sum2/60<10)
     printf("0%d:",sum2/60);
    else
     printf("%d:",sum2/60);
    if(sum2%60<10)
     printf("0%d\n",sum2%60);
    else
     printf("%d\n",sum2%60);
     cin>>sum1;
     return 0;
}
      
     
    
          
           
           
