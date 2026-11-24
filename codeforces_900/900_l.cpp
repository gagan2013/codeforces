#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        vector<int> v(k);
        for (int i = 0; i < k; i++) {
            cin>>v[i];
        }
        vector<int> a=v;
        sort(a.begin(),a.end());
        int mn=a[0];
        int mx=a[k-1];
        int cnt=INT_MIN;
            for(int i=0;i<k-1;i++)
            {
                cnt=max(cnt,v[i]-v[i+1]);
            }
            cnt=max(cnt,v[k-1]-mn);
            cnt=max(cnt,mx-v[0]);
            cout<<cnt<<endl;
    }
}