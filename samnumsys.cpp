#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
                    for(int k=0;k<10;k++)
                    {
                            int sum=222*(i+j+k),sum1=0;
                            sum1=i*100+10*j+k;
                            if(sum==(3982+sum1))
                            {
                                         cout<<i<<j<<k<<endl;
                                         system("pause");
                            }
                    }
                            
    int i;
cin>>i;

return 0;
}
