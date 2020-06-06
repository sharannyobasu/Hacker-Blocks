#include<iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int a[n],i,j,counti=0,countd=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=a[i+1])
		{
			counti++;
		}
		else if(a[i]>=a[i+1])
		{
			countd++;
		}
	}
	if(counti==n || countd==n)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}

	return 0;
}
