#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n>0)
	{
		int x;
		cin>>x;
		int a[x];
		int i,j;
		for(i=0;i<x;i++)
		{
			cin>>a[i];
		}
		n--;
		next_permutation(a,a+x);
		for(i=0;i<x;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
