#include<iostream>
using namespace std;
bool isleap(int y)
{
       if((y%4==0 && y%100!=0) || (y%400==0))
       return true;
       else
       return false;
}

int main()
{
       int t;
       cin>>t;
       int d1=11;
       int m1=1;
       int y1=2012;
       int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
       string days[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
       while(t--)
       {
               int d,m,y;
               cin>>d>>m>>y;
               int lp=0;
               long long da=0;
               for(int i=y1;i<y;i++)
               if(isleap(i))
               lp++;
               if(isleap(y) && (m>2))
               lp++;
               da=da+(365*(y-y1))+lp;
               for(int i=m1-1;i<(m-1);i++)
               da=da+mon[i];
               da=da+d-d1;
               //cout<<da<<endl;
               da=da%7;
               cout<<days[da]<<endl;
       }
       return 0;
}
