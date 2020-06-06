#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	int count=1;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==str[i+1])
		{
			count++;
		}
		else
		{
			cout<<str[i]<<count;
			count=1;
		}
	}
	return 0;
}
