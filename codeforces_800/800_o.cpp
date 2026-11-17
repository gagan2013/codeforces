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
        map<int,char> m;
        for (int i = 0; i < k; i++) {
            if(i%2==0)
                m[v[i]]='R';
            else 
                m[v[i]]='B';
        }
        int cnt=0;
        sort(v.begin(),v.end());
        for (int i = 0; i < k-1; i++) {
            if(m[v[i]]!=m[v[i+1]])
                cnt++;
        }
        if(cnt==k-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}