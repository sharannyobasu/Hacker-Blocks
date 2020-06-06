#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n],p=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		p+=i*a[i];
	}
	cout<<p;
	return 0;
}
