#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
void primesieve(int a[1000000])
{
    
    for(int i=3;i<1000000;i+=2)
    {
        a[i]=1;
    }
    for(ll i=3;i<1000000;i=i+2)
    {
        if(a[i]==1)
        {
            for(ll j=i*i;j<1000000;j=j+i)
            {
                a[j]=0;
            }
        }
    }
    a[2]=1;
    a[0]=a[1]=0;
}
int main()
{
	int t;
	cin>>t;
    int n,m, count=0;
    
    int a[1000000]={0};
    primesieve(a);
	int csum[1000000]={0};
    for(int i=1;i<1000000;i++)
    {
        csum[i]=csum[i-1]+a[i];
    }
	while(t--)
	{
		cin>>m>>n;
		cout<<csum[n]-csum[m-1]<<endl;
	}
    
}












