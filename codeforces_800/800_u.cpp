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
        vector<int> v(x);
        for (int i = 0; i < x; i++) {
            cin>>v[i];
        }
        int cnt=0,k=0;
        for (int i = 0; i < x; i++) {
            if(v[i]==0)
            {
                cnt++;
                k=max({k,cnt});
            }
            else
                cnt=0;
        }
        cout<<k<<endl;
    }
}