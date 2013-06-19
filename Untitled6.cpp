	
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	 
	int gcd( int n1,int n2)
{
	  if(n1==0) return n2;
	  else if(n2==0) return n1;
	 
	  if(n1>n2)
	    return gcd(n1%n2,n2);
	  else
	    return gcd(n1,n2%n1);
	 
	return 0;
	 
	}
	 
	int main()
	{
	  int i,j,k,lcm;
	  int W,H;
	 
	  while(1)
	  {
	   scanf("%d%d",&W,&H);
	   if(W==0&&H==0) break;
	 
	   if(W==H)
	       printf("1\n");
	   else if(W>H)
	   {
	        if(W%H==0)
	           printf("%d\n",W/H);
	        else
	          {
	           lcm=(W*H)/gcd(W,H);
	           printf("%d\n",lcm);
	          }
	    }
	    else if(H>W)
	    {
	        if(H%W==0)
	          printf("%d\n",H/W);
	        else
	          {
	            lcm=(W*H)/gcd(W,H);
	            printf("%d\n",lcm);
	          }
	     }
	     
      }
      return 0;
      }
 
 
