#include<iostream>
using namespace std;
int main() {
	int i,a,count=0;
	cin>>a;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==1)
	{
		cout<<"Prime";
	}
	else
	{
		cout<<"Not Prime";
	}
	return 0;
}
