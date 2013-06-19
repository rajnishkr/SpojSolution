#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<cmath>
using namespace std;
   
    int main(){
         map<string,int> m1;
    map<int,string> m2;
    m1["063"]=0;
    m1["010"]=1;
    m1["093"]=2;
    m1["079"]=3;
    m1["106"]=4;
    m1["103"]=5;
    m1["119"]=6;
    m1["011"]=7;
    m1["127"]=8;
    m1["107"]=9;
    m2[0]="063";
    m2[1]="010";
    m2[2]="093";
    m2[3]="079";
    m2[4]="106";
    m2[5]="103";
    m2[6]="119";
    m2[7]="011";
    m2[8]="127";
    m2[9]="107";
        string a;
        getline(cin,a);
        while(a!="BYE")
        {
          int p;
          p=a.find('+');
          string s1,s2;
          s1=a.substr(0,p);
          s2=a.substr(p+1,a.size()-p-2);
          int sum1=0,sum2=0,j=0;
          for(int i=0;i<s1.size();i=i+3)
          {
              string x=s1.substr(i,3);
             // cout<<x<<endl;
              sum1=sum1*10+m1[x];
          }
          j=0;
          for(int i=0;i<s2.size();i=i+3)
          {
              string x=s2.substr(i,3);
              //cout<<x<<endl;
              sum2=sum2*10+m1[x];
          }
           int sum=sum1+sum2;
          // cout<<sum1<<" "<<sum2<<endl;
           string s="";
           while(sum!=0)
           {
                        int i=sum%10;
                        s=m2[i]+s;
                        sum=sum/10; 
           }
           cout<<a<<s<<endl;                            
          cin>>a;
          }
          
          
          return 0;
          }
