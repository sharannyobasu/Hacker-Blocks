#include <iostream>
#include<algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[100005];
  int no;
  int res=0;
  for(int i=0;i<n;i++)
  {
      cin>>no;
      a[i]=no;
      res=res^no;
  }
  //cout<<res;
  int mask=res;
  int x=0;
  int y=0;
  for(int i=0;i<n;i++)
  {
      if((a[i]&mask)>0)
      {
          x=x^a[i];
      }
  }
  y=res^x;
  cout<<min(x,y)<<" "<<max(x,y);
}
