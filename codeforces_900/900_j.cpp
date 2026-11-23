#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll b , c;
        vector<int> p(n);
        p[0]=v[0];
        for (int i = 1; i < n; i++) {
            p[i]=p[i-1]+v[i];
        }
        for (int i = 0; i < q; i++) {
            int l,r,k;
            cin>>l>>r>>k;
            c = (r - l + 1) * k;
            if(l>1 && r>1)
            {
                b=p[n-1]-p[r-1]-p[l-2] + c;
            }
            else
            {
                b=p[n-1]-p[r-1] + c;
            }
            if(b % 2 != 0) {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}