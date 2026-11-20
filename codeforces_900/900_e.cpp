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
        if(k%2==0)
        {
            cout<<2<<endl;
            cout<<1<<" "<<k<<endl;
            cout<<1<<" "<<k<<endl;
        }
        else
        {
            cout<<4<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<k<<endl;
            cout<<2<<" "<<k<<endl;
        }
    }
}