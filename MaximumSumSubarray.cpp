#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int i,a[n];
		int cs=0,ms=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cs=cs+a[i];
			if(cs<0)
			{
				cs=0;
			}
			ms=max(ms,cs);
		}
		cout<<ms<<endl;
		t--;
	}
}
