#include <bits/stdc++.h>
using namespace std;

bool check(long long int k,long long int h,map<long long int,long long int> m)
{
    long long int s=0;
    for (auto &[x,v] : m) {
        s+=v/k;
    }
    if(s>=h){
        return true;
    }
    return false;
}
long long int bs(long long int n,long long int m,map<long long int,long long int> mp)
{
    long long int l=0;
    long long int r=1e18;
    while(l<r)
    {
        long long int mid=l+(r-l)/2;
        if(!(check(mid,n,mp)))
            r=mid;
        else
            l=mid+1;
    }
    return l-1;
}
int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<long long int> v(m);
    for (long long int i = 0; i < m; i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    map<long long int,long long int> mp;
    for (long long int i = 0; i < m; i++) {
        mp[v[i]]++;
    }
    if(n>m)
        cout<<0<<endl;
    else
        cout<<bs(n,m,mp)<<endl;
}