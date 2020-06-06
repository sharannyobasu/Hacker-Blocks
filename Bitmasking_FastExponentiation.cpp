#include<iostream>
#include<algorithm>
using namespace std;
int powerop(int a,int n)
{
	int ans=1;
	while(n>0)
	{
		if((n&1)>0)
		{
			ans=ans*a;
		}
		a=a*a;
		n=n>>1;
	}
	return ans;
}
int main() {
	int a,n;
	cin>>a>>n;
	cout<<powerop(a,n);
	return 0;
}
