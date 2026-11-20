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
        int cnt=1;
        while(k%cnt==0)
        {
            cnt++;
        }
        cout<<cnt-1<<endl;
    }
}