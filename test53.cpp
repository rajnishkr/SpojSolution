#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>
#define inf 1<<30
#define LL long long
using namespace std;
string n="a";
void fun()
{
     if(n.length()==10)
      {
              cout<<"done";
              return;
      }
      n=n+'a';
      fun();
      cout<<n<<endl;
      system("pause");
 }
int main(){
    fun();


return 0;
}
