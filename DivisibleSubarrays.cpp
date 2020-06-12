#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long 
ll a[1000000], pre[1000000];
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int sum=0;
      memset(pre,0,sizeof(pre));
      pre[0]=1;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          sum+=a[i];
          sum%=n;
          sum=(sum+n)%n;
          pre[sum]++;
      }
      ll ans=0;
      for(int i=0;i<n;i++)
      {
          ll m=pre[i];
          ans+=m*(m-1)/2;
      }
      cout<<ans<<endl;
  }
}
