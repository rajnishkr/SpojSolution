#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    
     int test;
     scanf("%d",&test);
     while(test--){
    int arr[501],arr1[501],arr2[501],arr3[501];
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
            cin>>arr[i];
     }
     int i=0;
     while(i!=n)    
     {       int j,k;
            if(i-1<0)
             j=n-1;
             else
             j=i-1;
             if(i+1>n-1)
             k=0;
             else
             k=i+1;
             arr1[i]=(arr[j] ^ arr[i] )^ arr[k];
             i++;
           /*  if(i==n)
             {
                     for(int a=0;a<n;a++)
                     {arr[a]=arr1[a];
                     cout<<arr1[a]<<"   ";
                     }
                     cout<<endl<<endl;
                     system("pause");
             }  */
     }
    // display(arr1,n);
     int m1,m2,count=1;
     if(k==1 || arr1[0]==arr[0])
     display(arr1,n);
     else
     { m1=arr[0],m2=arr1[0]; 
     for(int a=0;a<n;a++)
      arr2[a]=arr1[a];
      int  i=0,flag=1;;
      while(1)
      {
            int j,k;
            if(i-1<0)
             j=n-1;
             else
             j=i-1;
             if(i+1>n-1)
             k=0;
             else
             k=i+1;
             arr3[i]=(arr2[j] ^ arr2[i] )^ arr2[k];
             i++;
             if(i==n)
             {       if(count==k || arr2[0]==arr3[0])
                     {
                                 display(arr3,n);
                                 flag=0;
                                 break;
                     }
                    
                     for(int a=0;a<n;a++)
                      arr2[a]=arr3[a];
                    // display(arr2,n);
                    // cout<<m1<<" "<<m2<<endl;
                     //system("pause");   
                    if(arr2[0]==m1 || arr3[0]==m2)
                    break;
                    else
                    count++;            
             }     
     
            i=i%n;
          //cout<<count<<endl;
     }
     
    // cout<<count<<endl; 
    int t;
    if(flag){ 
     t=k%(count+1);
     while(t--)
     {
        int j,k;
            if(i-1<0)
             j=n-1;
             else
             j=i-1;
             if(i+1>n-1)
             k=0;
             else
             k=i+1;
             arr1[i]=(arr[j] ^ arr[i] )^ arr[k];
             i++;
            if(i==n)
             {
                     for(int a=0;a<n;a++)
                     arr[a]=arr1[a];
                     
             }  
             i=i%n;
     }
     display(arr1,n);         
 }
}
}
    
     return 0;
     }
