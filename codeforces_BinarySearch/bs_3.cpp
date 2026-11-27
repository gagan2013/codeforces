#include <bits/stdc++.h>
using namespace std;

#define ll long long int


ll bs(ll n, ll c, vector<ll>& v)
{
    ll sum = 0;
    ll sq = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += v[i];
        sq += v[i]*v[i];
    }
    
    ll l = 1, r = sqrt(2e18/(4*n)), w = 1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll v=((4 * n) * (mid * mid) + (4 * sum * mid) + sq);
        if (v >= c) 
        {
            w = mid;
            r = mid -1;
        } 
        else 
            l = mid +1;
    }
    return w;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        cout<<bs(n,c,v)<<endl;
    }
}