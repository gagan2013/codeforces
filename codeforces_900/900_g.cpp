#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        vector<int> v(x);
        for (int i = 0; i < x; i++) {
            cin>>v[i];
        }
        int cnt=0,k=0;
        sort(v.begin(),v.end());
        for (int i = 0; i < x-1; i++) {
            if(v[i+1]-v[i]<=y)
            {
                cnt++;
                k=max({k,cnt});
            }
            else
                cnt=0;
        }
        cout<<x-k-1<<endl;
    }
}