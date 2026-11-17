#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) { 
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int c;
        cin>>c;
        if(c>=v[0] && c<=v[n-1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}