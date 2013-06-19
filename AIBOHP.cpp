    #include<iostream>
    #include<string>
    #include <stdio.h>
    using namespace std;
    int m;
    char data[6101];
    int mem[6101][6101];
    bool mem1[6101][6101];
    int min(int a,int b){
       if(a>b)
          return b;
       return a;
    }
    int solve(int s,int e){
       if(s>=e)
          return 0;
       if(mem1[s][e])
          return mem[s][e];
       int ret=m+1;
       if(data[s]==data[e]) ret=min(ret,solve(s+1,e-1));
       ret=min(ret,min(1+solve(s+1,e),1+solve(s,e-1)));
       mem[s][e]=ret;
       mem1[s][e]=1;
       return ret;
    }
    int main(){
       int n;
       cin>>n;
       for(int i=0;i<n;++i){
          memset(mem1,0,sizeof(mem1));
          //cin>>data;
          scanf("%s",&data);
          //gets(data);
          m=strlen(data);
          printf("%d\n",solve(0,m-1));
       }
       return 0;
    }
