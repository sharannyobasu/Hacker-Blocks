#include<iostream>
using namespace std;
int main() {
	long long int n,count;
	cin>>n;
	long long int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int key;
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			count=i;
		}
	}
	if(count<n)
	{
		cout<<count<<endl;
	}
	else
	{
		cout<<"-1";
	}
	//return 0;
}
