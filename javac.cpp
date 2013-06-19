#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
int ccheck(string s)
{  string a="abcdefghijklmnopqrstuvwxyz_";
   int flag=0; 
   for(int i=0;i<s.length();i++)
          {       
                  if(a.find(s[i])==-1)
                  {
                    
                  //  flag1=1;
                    flag=1;
                    break;
                  }
          }
          if(flag!=1) 
          {
             if(s[0]=='_' || s[s.size()-1]=='_')
               flag=1;
             else
             {
                 int count=0;
                 char * cstr, *p;
               cstr = new char [s.size()+1];
               strcpy (cstr, s.c_str());
               p=strtok (cstr,"_");
               int j=0;
               string s1="";
              while (p!=NULL)
              {  string e(p) ;         
                /*if(j)
                {
                  s1=s1+(char)(p[0]-32)+e.substr(1);
                }
                else
                s1=s1+e;  */ 
                j++; 
                count=count+e.size();
                 //cout<<e<<endl;    
                 p=strtok(NULL,"_");   
              }
             // cout<<count<<" "<<j<<" "<<s.size()<<endl; 
              if((count+j)==s.size()+1)
              flag=0;
              //cout<<s1<<endl;
              else
              flag=1;
              //cout<<"Error!\n";
                        
                                   
            }
        } 
    return flag;
}

int main(){
    string s;
    while(cin>>s)
    {
        string a="abcdefghijklmnopqrstuvwxyz_";
        string b="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string c="_";
        int flag1=0;
        if(s.find(c)!=-1)
        { for(int i=0;i<s.length();i++)
          {       
                  if(a.find(s[i])==-1)
                  {
                    
                    flag1=1;
                    cout<<"Error!\n";
                    break;
                  }
          }
          if(flag1!=1) 
          {
             if(s[0]=='_' || s[s.size()-1]=='_')
               cout<<"Error!\n";
             else
             {
                 int count=0;
                 char * cstr, *p;
               cstr = new char [s.size()+1];
               strcpy (cstr, s.c_str());
               p=strtok (cstr,"_");
               int j=0;
               string s1="";
              while (p!=NULL)
              {  string e(p) ;         
                if(j)
                {
                  s1=s1+(char)(p[0]-32)+e.substr(1);
                }
                else
                s1=s1+e;   
                j++; 
                count=count+e.size();
                 //cout<<e<<endl;    
                 p=strtok(NULL,"_");   
              }
             // cout<<count<<" "<<j<<" "<<s.size()<<endl; 
              if((count+j)==s.size()+1)
              cout<<s1<<endl;
              else
              cout<<"Error!\n";
                        
                                   
            }
        }
    }
        else
        {   string s1="";
            int f=0;
            for(int i=0;i<s.size();i++)
            {
               if(b.find(s[i])!=-1)
                {                 // cout<<s[i]<<endl;
                                   s1=s1+s.substr(f,i-f)+"_"+(char)(s[i]+32);
                                  // cout<<s1<<endl;
                                   f=i+1;
                                   
                }
            }
            // cout<<s1<<endl;
            s1=s1+s.substr(f);
            //cout<<s1<<endl;
            int flag=ccheck(s1);
            if(flag)
            cout<<"Error!\n";
            else
            cout<<s1<<endl;                    
        }     
    
        
          
          }
        return 0;
        }
    
