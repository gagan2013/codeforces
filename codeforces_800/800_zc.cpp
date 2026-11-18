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
        if(k==1)
            cout<<0<<endl;
        else
        {
            int cnt=0;
            for (int i = 0; i < k-1; i++) {
                if(v[i]%2==0 && v[i+1]%2==0 )
                    cnt++;
                else if(v[i]%2!=0 && v[i+1]%2!=0)
                    cnt++;
            }
            cout<<cnt<<endl;
        }
    }
}