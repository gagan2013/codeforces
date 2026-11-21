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
        vector<char> v(x);
        for (int i = 0; i < x; i++) {
            cin>>v[i];
        }
        int cnt=0,cnt1=0;
        int k=0,l=0;
        for (int i = 0; i < x; i++) {
            if(v[i]=='<')
            {
                cnt++;
                k=max({k,cnt});
            }
            else
                cnt=0;
            if(v[i]=='>')
            {
                cnt1++;
                l=max(l,cnt1);
            }
            else
                cnt1=0;
        }
        cout<<max(k,l)+1<<endl;
    }
}