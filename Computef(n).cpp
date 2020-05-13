#include<iostream>
using namespace std;
int main() {
	signed long long int n,i,a,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum=0;
		cin>>a;
		if(a%2==0)
		{
			sum=a/2;
		}
		else
		{
			sum=((a-1)/2)-a;
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
