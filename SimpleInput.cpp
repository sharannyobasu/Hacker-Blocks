#include<iostream>
using namespace std;
int main() {
	int i,j,sum=0,a;
	bool n=true;
	while(n)
	{
		cin>>a;
		sum+=a;
		if(sum>=0)
		{
			cout<<a<<endl;
		}
		else
		{
			break;
		}

	}
	return 0;
}
