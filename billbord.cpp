#include<iostream>
#include<cmath>
#define pi 3.14159265
using namespace std;
int main(){
    double a,b,time,m,n,angle,speed;
    while(1)
    {       cin>>a>>b>>time>>m>>n;
            if(a==0)
            break;
            double hor=a*m/time;
            double ver=b*n/time;
            angle=atan(ver/hor)*180/pi;
            speed=hor*hor+ver*ver;
            speed=sqrt(speed);
            printf("%.2lf %.2lf\n",angle,speed);
            
    }
    return 0;
}
    
