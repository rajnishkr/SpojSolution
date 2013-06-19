#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
using namespace std;
int product[100000009];
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
    memset(product,0,100000009*sizeof(int));
     char a[10005],b[10005];
     scanf("%s%s",a,b);
     int len1=strlen(a);
     int len2=strlen(b);
     int cy=0,k=k=100000000,mi=100000000;
     for(int i=len1-1;i>=0;i--,k--)
     {
           int l=k;
           int p=a[i]-'0';
           for(int j=len2-1;j>=0;j--)
           {
                   int q=b[j]-'0';
                   product[l]=(product[l]+p*q+cy)%10;
                   cout<<(product[l]+p*q+cy)%10<<" ";
                   cy=(product[l]+p*q+cy)/10;
                   l--;
           }
           while(cy!=0)
           {
          product[l]=(product[l]+cy)%10;
          cy=(product[l]+cy)/10;
          l--;
          }
           mi=min(mi,l);
     }
     cout<<mi<<endl;
     for(int i=mi+1;i<=100000000;i++)
     printf("%d",product[i]);
     printf("\n");
    }
return 0;
}
