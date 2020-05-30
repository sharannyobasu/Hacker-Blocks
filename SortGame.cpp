#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
class group
{
	public:
	string f_name;
	int salary;
	group(string name,int salary)
	{
		f_name=name;
		this->salary=salary;
	}

};
bool compare(group a, group b)
{
	int ac=a.salary;
	int bc=b.salary;
	if(ac==bc)
	{
		return a.f_name<b.f_name;
	}
	return ac>bc;
}
int main() {
	int val;
	cin>>val;
	int n;
	cin>>n;
	vector<group>v;
	for(int i=0;i<n;i++)
	{
		int x;
		string s;
		cin>>s>>x;
		group temp(s,x);
		v.push_back(temp);
	}
	sort(v.begin(),v.end(),compare);
	for(auto c:v)
	{
		if(c.salary>=val)
		{
			cout<<c.f_name<<" "<<c.salary<<endl;
		}
	}
}
