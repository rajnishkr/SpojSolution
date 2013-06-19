#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int winner(int i,int j)
{ 
    if(i==1 && j==2)
    return 1;
    if(i==2 && j==1)
    return 2;
    if(i==2 && j==3)
    return 1;
    if(i==3 && j==2)
    return 2;
    if(i==3 && j==1)
    return 1;
    if(i==1 && j==3)
    return 2;
    
    
    return 0;
}
int main(){
    
    vector<string> vr[10];
    vector<string> vs[10];
    vector<string> vp[10];
    string str="csenfrdehuitjpples";
    vr[1].push_back("Kamen");
    vr[2].push_back("Rock");
    vr[3].push_back("Pierre");
    vr[4].push_back("Stein");
    vr[5].push_back("Ko");
    vr[5].push_back("Koe");
    vr[6].push_back("Sasso");
    vr[6].push_back("Roccia");
    vr[7].push_back("Guu");
    vr[8].push_back("Kamien");
    vr[9].push_back("Piedra");
    vs[1].push_back("Nuzky");
    vs[2].push_back("Scissors");
    vs[3].push_back("Ciseaux");
    vs[4].push_back("Schere");
    vs[5].push_back("Ollo");
    vs[5].push_back("Olloo");
    vs[6].push_back("Forbice");
    vs[7].push_back("Choki");
    vs[8].push_back("Nozyce");
    vs[9].push_back("Tijera");
    vp[1].push_back("Papir");
    vp[2].push_back("Paper");
    vp[3].push_back("Feuille");
    vp[4].push_back("Papier");
    vp[5].push_back("Papir");
    vp[6].push_back("Carta");
    vp[6].push_back("Rete");
    vp[7].push_back("Paa");
    vp[8].push_back("Papier");
    vp[9].push_back("Papel");
    
    string s;
    cin>>s;
    int game=1;
    while(s!=".")
    {            string s1,name1,name2;
                 cin>>name1>>s1>>name2;
                 string s2;
                 cin>>s2;
                 int w1=0,w2=0,f,f1;
                 f=str.find(s);
                 f=f/2+1;
                 f1=str.find(s1);
                 f1=f1/2+1;
                 //cout<<f<<f1<<endl;
                 while(s2!="-" && s2!=".")
                 {

                       int c=0;
                       for(int i=0;i<vr[f].size() ;i++)
                       {
                               if(s2==vr[f][i])
                               c=1;
                       }
                       if(c==0)
                       {    
                       for(int i=0;i<vs[f].size() ;i++)
                       {
                               if(s2==vs[f][i])
                               c=2;
                       }
                       }
                       if(c==0)
                       {
                       for(int i=0;i<vp[f].size() ;i++)
                       {
                               if(s2==vp[f][i])
                               c=3;
                       }
                       }
                       cin>>s2;
                        int c1=0;
                       for(int i=0;i<vr[f1].size() ;i++)
                       {
                               if(s2==vr[f1][i])
                               c1=1;
                       }
                       if(c1==0)
                       {    
                       for(int i=0;i<vs[f1].size() ;i++)
                       {
                               if(s2==vs[f1][i])
                               c1=2;
                       }
                       }
                       if(c1==0)
                       {
                       for(int i=0;i<vp[f1].size() ;i++)
                       {       
                               if(s2==vp[f1][i])
                               c1=3;
                       }
                       }
                       //cout<<c1<<endl;
                       int k=winner(c,c1);
                     // cout<<k<<c<<c1<<f<<endl;
                       if(k==1)
                       w1++;
                       if(k==2)
                       w2++;
                       cin>>s2;
                 }
                 printf("Game #%d:\n",game++);
                 if(w1==1)
                 cout<<name1<<": "<<w1<<" point\n";
                 else
                 cout<<name1<<": "<<w1<<" points\n";
                 if(w2==1)
                 cout<<name2<<": "<<w2<<" point\n";
                 else
                 cout<<name2<<": "<<w2<<" points\n";
                 if(w1==w2)
                 printf("TIED GAME\n") ;
                 else
                 {
                     if(w1>w2)
                     cout<<"WINNER: "<<name1<<endl;
                     else
                     cout<<"WINNER: "<<name2<<endl;
                 }
                 
                 if(s2==".")
                 break;
               
                 cout<<endl;
                 cin>>s;
    }
    return 0;
}
                         
    
