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
        vector<int>v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        int b=0;
        for(int i=0;i<k;i++){
            b=max(b,v[i]); 
        }
        b++;
        for(int i=0;i<k;i++)
        {
            cout<<b-v[i]<<" ";
        }
        cout<<endl;
    }
}