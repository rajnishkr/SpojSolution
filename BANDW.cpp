#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    string obj,target;
    cin>>obj>>target; 
    while(obj!="*")
    {
        int c=0,count=0,p=0;
        for(int i=0;i<obj.length();i++)
        {
                if(obj[i]!=target[i])
                c=1;
                else
                 {
                  if(c==1)
                  count++;
                  c=0;
                   p=1;
                 }
        }
        if(c==1)
        count++;
        if(!p)
        count=1;
        printf("%d\n",count);
         cin>>obj>>target;
    }
    return 0;
}
