#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        int m=v[0];
        for (int i = 0; i < n; i++) {
            if(i!=n-1)
                m=max(m,v[i+1]-v[i]);
            if(i==n-1)
                m=max(m,2*(k-v[n-1]));
        }
        cout<<m<<endl;
    }
}