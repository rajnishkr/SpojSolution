#include<iostream>
#include<set>
using namespace std;
int main()
{   int n;
    cin>>n;
    set<int> s;
    int ff[n];
    for(int i=0;i<n;i++)
    {
            int f,m;
            cin>>ff[i]>>m;
            for(int j=0;j<m;j++)
            {        cin>>f;
                      if(s.count(f)==0)
                    s.insert(f);
            }
    }
    int count=0;
    for(int i=0;i<n;i++)
    if(s.count(ff[i])!=0)
    count++;
    cout<<s.size()-count<<endl;
    system("pause");
	return 0;
}
		

