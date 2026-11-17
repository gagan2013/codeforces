#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    vector<int> v(x);
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
        v[i]=abs(v[i]);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}