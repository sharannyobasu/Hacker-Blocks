#include<iostream>
using namespace std;
int main() {
	int a,b,i,x;
	cin>>a>>b;
	x=a;
	for(i=1;i<b;i++)
	{
		a=x*a;
	}
	cout<<a;
	return 0;
}
