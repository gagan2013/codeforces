#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		set<char> set;
		for(int i=0;i<s.size();i++)
			set.insert(s[i]);
		vector<char> v;
		for(auto & c : set)
			v.push_back(c);
		map<int,char>m;
		for(int i=0;i<v.size();i++)
			m[v[i]]=v[v.size()-1-i];
		vector<char> d;
		for(int i=0;i<n;i++)
		{
			d.push_back(m[s[i]]);
			cout<<d[i];
		}
		cout << endl;	
	}
}
