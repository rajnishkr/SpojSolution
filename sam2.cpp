#include"iostream"
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define SS(n) scanf("%d",&n)
#define PR(n) ("%d\n",n)
#define pb push_back
#define LL long long
using namespace std;
struct student
{
  char name[30];
  unsigned int sex:2;
   int age:5;
   unsigned rollno:7;
   unsigned branch:2; 
   int b; 
};

       

int main(){

student *s=new student;
s->sex=2;
cout<<s->sex<<endl;



system("pause");
return 0;
}
