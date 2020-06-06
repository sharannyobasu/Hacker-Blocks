#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key)
{
	int left=0;
	int right=n-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(key==a[mid])
		{
			return mid;
		}
		else if(key<a[mid])
		{
			right=mid-1;
		}
		else if(key>a[mid])
		{
			left=mid+1;
		}
	}
	return -1;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	cout<<binarysearch(a,n,key);
}
