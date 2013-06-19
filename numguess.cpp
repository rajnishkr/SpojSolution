    #include<iostream>
    #include<stdio.h>
    using namespace std;
    int main()
    {
       int a,b,mid;
       char s[4];
       scanf("%d%d",&a,&b);
       printf("%d\n",(a+b)/2);
       fflush(stdout);
       scanf("%s",s);
       mid=(a+b)/2;;
       while(s[0]!='W') {
          if(s[0]=='L')
          a=mid;
         if(s[0]=='H')
                b=mid;      
          printf("%d %d %d \n",a,b,(a+b)/2);
          fflush(stdout);
          scanf("%s",s);
         int mid1=(a+b)/2;
          if(a>b)
          { int c=b;
                b=a;
                a=c;
          }
          if(mid1==a)
          a--;
          if(mid1==b)
          b++;
          if(mid1==mid)
          {a--;
           b++;
           }
           mid=(a+b)/2;
       }
       return 0;
    }


