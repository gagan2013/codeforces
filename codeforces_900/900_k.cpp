#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        vector<int> v(k);
        for (int i = 0; i < k; i++) {
            cin>>v[i];
        }
        for (int i = 0; i < k; i++) {
            if( v[i] == 1 )
                v[i]++ ;
        }
        for (int i = 0; i < k-1; i++) {
            if(v[i+1]%v[i]==0)
                v[i+1]+=1;
            cout<<v[i]<<" ";
        }
        cout<<v[k-1]<<endl;
    }
}