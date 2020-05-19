#include <iostream>
using namespace std;
bool canplacecows (long long int stalls[],long long int n,long long int c,int minsep)
{
  int lastcow=stalls[0];
  int count=1;
  for(int i=0;i<n;i++)
  {
    if(stalls[i]-lastcow>=minsep){
    
      lastcow=stalls[i];
    count++;
    
    if(count==c)
    {
      return true;
    }
  }
  }
  return false;
}
int main() {
  long long int n;
  long long int cows;
  cin>>n>>cows;
  long long int stalls[n];
  for(int i=0;i<n;i++)
  {
    cin>>stalls[i];
  }
  for(int i=0;i<n;i++)
  {
	  for(int j=i+1;j<n;j++)
	  {
		  if(stalls[i]>stalls[j])
		  {
			  int temp=stalls[j];
			  stalls[j]=stalls[i];
			  stalls[i]=temp;
		  }
	  }
  }
  int s=0;
  int e=stalls[n-1];
  int ans=-1;
  while(s<=e)
  {
    int mid=(s+e)/2;
    bool cowsrakhpaye=canplacecows(stalls,n,cows,mid);
    if(cowsrakhpaye)
    {
      ans=mid;
      s=mid+1;
    }
    else
    {
      e=mid-1;
    }
  }
  cout<<ans<<endl;
  }
