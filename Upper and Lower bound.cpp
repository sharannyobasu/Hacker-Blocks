#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	while(key>0)
	{
		int x;
		cin>>x;
		int *lb=lower_bound(a,a+n,x);
		int q1=lb-a;
		int* ub=upper_bound(a,a+n,x);
		int q2=ub-a;
		if(binary_search(a,a+n,x)==false)
		{
			cout<<"-1 -1"<<endl;
			goto y;
		}
		cout<<q1<<" "<<q2-1<<endl;
		y:
		key--;
	}
}
