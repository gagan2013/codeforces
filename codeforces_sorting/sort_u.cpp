#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for (int i=0; i<x; i++)
    {
        int a;
        cin>>a;
        vector<int> v(a);
        for (int i=0; i<a; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int cnt=0;
        for (int i=0; i<a/2; i++)
        {
            cnt+=v[v.size()-1-i]-v[i];
        }
        cout<<cnt<<endl;
    }
}