 #include<cstdio>
#include<cstring>
using namespace std;
#define Max 110
char rect[Max][Max];
int table[1<<8];
int tablecountbit(int x)
{	return table[x&0xff]+table[(x>>8)&0xff]+table[(x>>16)&0xff]+table[(x>>24)&0xff];
}
int main()
{
 for(int i=0;i<8;i++) 
 table[1<<i]=1;
 
 for(int i=0;i<(1<<8);i++)
  table[i]=table[i&(i-1)]+table[i&-i];
  
  
 int m,n,k;
 scanf("%d %d %d\n",&m,&n,&k);
 for(int i=0;i<m;i++)
 {
  scanf("%s",rect[i]);
 }
 int list[110],cnt=0,tmp;
 
 for(int a=0;a<m;a++)
 {
  for(int b=0;b<n;b++)
  {
   memset(list,0,(n+1)*sizeof(int));
   for(int i=a;i<m;i++)
   {
    for(int j=b;j<n;j++)
    {
		list[j+1]=list[j+1]|list[j]|(1<<(rect[i][j]-'A'));
		tmp=tablecountbit(list[j+1]);
		if(tmp==k)
		cnt++;
		else if(tmp>k)
		break;
		//printf("%d %d %d %d %d\n",a,b,i,j,list[j+1]);
    }
   }
  }
 }
 
 printf("%d",cnt);
 return 0;
}

