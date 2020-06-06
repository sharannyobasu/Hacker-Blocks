#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==b)
	{
		return b;
	}
	if(a>b)
	{
		return gcd(a-b,b);
	}
	else if(b>a)
	{
		return gcd(b-a,a);
	}
	else if(a==1)
	{
		return 1;
	}
	return -1;
}
int main() {
	int a,b;
	cin>>a>>b;
	int x=gcd(a,b);
	cout<<x;
}
