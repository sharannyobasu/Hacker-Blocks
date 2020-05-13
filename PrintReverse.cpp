#include<iostream>
using namespace std;
int main() {
	int j,d,sum=0,n;
	cin>>n;
	while(n!=0)
	{
		d=n%10;
		sum=sum*10+d;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
