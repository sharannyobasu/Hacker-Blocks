#include<iostream>
#include<math.h>
using namespace std;
int decimaltobinary(int n)
{
	int ans=0,i,d,start=0;
	while(n>0)
	{
		d=n%10;
		if(d==1)
		{
			ans+=pow(2,start);
		}
		start++;
		n=n/10;
	}
	return ans;
}
int main() {
	int ans;
	cin>>ans;
	cout<<decimaltobinary(ans);
	return 0;
}
