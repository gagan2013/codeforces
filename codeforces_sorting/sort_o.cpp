#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for (int i = 0; i < x; i++) 
    {
        vector<int> v(3);
        for (int i = 0; i < 3; i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]-v[0]<<endl;
    }
}