#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
    int k=0,i,p,mem;
    string s,w;
     while(cin>>p)
     {
       getchar();
       getline(cin,w);
       getline(cin,s);
       
    string x=s;
    i=0;
    mem=0;
    int pos,pos1=-1;
    if(w.size()<=s.size())
    {   while((i+w.size())<=s.size())
        {      int c=0,i1=i,count=0;
            for(int k=0;k<w.size();k++)
            {        
                     
                    if(s[i]==w[0])
                    count++;
                     if(count==2)
                      pos1=i;
                    
                    if(w[k]!=s[i])
                    {
                      pos=i;                              
                      c=1;
                      break;
                    }
                    else
                        i++;
            }  
         // cout<<i<<" "<<pos<<" "<<pos1<<" "<<c<<endl;
        //   system("pause");
               if(c==1)
               { if(pos1==-1)
                  i=pos+1;
                  else
                  i=pos1;
               }
               else
               {
                   cout<<i1<<endl;
                   mem=1;
                  if(pos1!=-1)
                    i=pos1;
                  } 
                pos1=-1;               
           }                         
    }
    else
       { cout<<"\n";
         mem=1;
         }
     if(!mem)
     cout<<"\n";
     
     cout<<"\n";
       
}

return 0;
}
