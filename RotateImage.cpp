#include<iostream>
using namespace std;
void rotate(int arr[1000][1000],int n)
{
  int t[1000][1000];
	int temp;
	for(int i=0;i<n;i++)
	{
		int start=0;
		int end= n-1;
			while(start<end)
			{
				temp=arr[i][start];
				arr[i][start]=arr[i][end];
				arr[i][end]=temp;
        start++;
        end--;
			}
	}
  for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			t[j][i]=arr[i][j];
		}
	}
  for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<t[i][j]<<" ";
		}
    cout<<endl;
	}
}
int main() {
	int n;
  cin>>n;
	int a[1000][1000];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	rotate(a,n);
}
