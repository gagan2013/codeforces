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
        int cnt=0;
        for (int i = 0; i < k; i++) {
            for (int j = i+1; j < k; j++) {
                if(gcd(v[i],v[j])==1 || gcd(v[i],v[j])==2)
                {
                    cnt++;
                }
            }
        }
        if(cnt>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}