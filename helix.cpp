#include<iostream>
#include<vector>
#include<set>
#include<cstdio>
using namespace std;
int main(){
    int n,m;
    cin>>n ;
    while(n){
    set<int> set1;  
    set1.clear();
    for(int i=0;i<n;i++)
     {
            int element;
            cin>>element;
             set1.insert(element);
     }
     
     int sum1=0,sum2=0,sum=0;
     set<int>::iterator it,it1,j;
     j=set1.begin();
     cin>>m;
     for(int i=0;i<m;i++ )
     {       int element;
             cin>>element;
              // cout<<element<<endl;
             if(set1.count(element)>0)
             {       
                       it=set1.find(element);
                    //   cout<<"it1 "<<*j<<"it "<<*it<<endl;
                        for (j; j!=it; ++j)
                        {  // cout<<*j<<endl;
                            sum1+=*j;
                        }
                       // cout<<sum1<<" "<<sum2<<endl;
                        if(sum1>=sum2)
                        {
                             sum+=sum1+element;
                             sum2=0;
                             sum1=0;
                        }
                        else
                        {
                             sum+=sum2+element;
                             sum2=0;
                             sum1=0;
                        }
                        ++j;
                       // it1=j;
                       // cout<<"sum"<<sum<<endl<<endl;
            }
            else
              sum2+=element;
                                    
             }
     for (j; j!=set1.end();++j)
    {  // cout<<*j<<endl;
          sum1+=*j;
        }
    if(sum2>sum1)
    sum=sum+sum2;
    else
    sum=sum+sum1;
    cout<<sum<<endl;
    cin>>n;
  }
    return 0;
    //system("pause");
}
