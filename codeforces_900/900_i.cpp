#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        vector<int> v(x),b;
        for (int i = 0; i < x; i++) 
            cin>>v[i];
        vector<int> a = v;
        sort(a.begin(),a.end());
        for (int i = 0; i < x; i++) {
            int k=abs(v[i]-a[i]);
            b.push_back(k);
        }
        int h=__gcd(b[0],b[1]);
        for (int i = 2; i < x; i++) {
            h=__gcd(h,b[i]);
        }
        cout<<h<<endl;
    }
}