#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; ++i)
    {
        int a;
        cin>>a;
        vector<int> v(a);
        for (int i = 0; i < a; i++) 
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cnt=INT_MIN;
        for (int i = 0; i < a; i+=2) 
        {
        cnt=max(cnt,(v[i+1]-v[i]));
        }
        cout<<cnt<<endl;
    }
}