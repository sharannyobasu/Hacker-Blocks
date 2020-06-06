#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i,j,k,sum=0,bor=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			bor=0;
			for(k=i;k<=j;k++)
			{
				bor=(bor|a[k]);
			}
			sum+=bor;
		}
	}
	cout<<sum;
	return 0;
}
