#include<iostream>
using namespace std;
int main() {
	int i,n,m,j,k,z=0;
	int a[1000][1000];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==k)
			z++;
		}
	}
	cout<<z;
	return 0;
}
