#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum=0,xor1;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			xor1=0;
			for(int k=i;k<=j;k++)
			{
				xor1=xor1^a[k];
			}
			sum+=xor1;
		}
	}
	cout<<sum;
	return 0;
}
