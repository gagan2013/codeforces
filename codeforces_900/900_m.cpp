#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        vector<ll> v(k);
        for (int i = 0; i < k; i++) {
            cin>>v[i];
        }
        ll cnt=0;
        for (int i = 0; i < k-1; i++) {
            if(v[i]==0 && v[i+1]!=0)
                cnt++;
        }
        if(v[0]!=0)
            cnt++;
        if(cnt==0)
            cout<<0<<endl;
        else if(cnt<2 && cnt>0)
            cout<<1<<endl;
        else
            cout<<"2"<<endl;

    }
}