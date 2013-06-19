#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    string a;
    getline(cin,a);
    string s="ABCD";
    int count[4]={0};
    int m=2*n;
    char b[m];
    int in1=s.find(a[0]);
    float im,in;
    for(int i=0;i<2*n;i++)
    {
           int in2=s.find(a[i]);
           count[in2]++;
    }
    im=s.find(a[1]);
     for(int i=0;i<4;i++)
    {
            if(i!=in1 && i!=im && count[i]<n)
              {b[0]=s[i];
              count[i]++;
              break;
              }
    }
        int p=1;   
    for(int i=1;i<2*n;i++)
    {    in=s.find(a[i]);
         im=s.find(b[i-1]);
         if(!p)
         in1=s.find(a[i+1]);
          if(p)
          in1=s.find(a[i-1]);
        
          for(int j=0;j<4;j++)
           { 
             
           
            if((count[j]<n) && j!=in && j!=im && j!=in1 )
             { 
              b[i]=s[j];
      
              count[j]++;
               if(i%2==0)
               p=1;
               else
               p=0;
              break;
             }
                  
    }   
    }  
       
    b[2*n]='\0';
    cout<<b<<endl;
    system("pause");
    return 0;
    
}
    
