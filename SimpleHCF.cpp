#include<iostream>
using namespace std;
int gcd(int a,int b)
{

	if(a>b)
	{
		return gcd(a-b,b);
	}
	else if(b>a)
	{
		return gcd(a,b-a);
	}
	else if(a==b)
	{
		return a;
	}
	return 1;
}
int main() {
	int n;
	cin>>n;
	int a[n],b,x,y;
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	x=a[0];
	for(i=1;i<n-1;i++)
	{
		x=gcd(a[i],x);
	}
	cout<<x;
	
	return 0;
}
