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
        for (int i = 0; i < x; i++) 
            cin>>v[i];
        vector<int> a(x);
        for (int i = 0; i < x; i++) {
            v[i]=a[i];
        }
        sort(a.begin(),a.end());
        map<int,int> m;
        vector<int> b;
        for(int i=0;i<x;i++)
        {
           m[a[i]]=i+1;
           m[v[i]]=i+1;
        }
        for(int i=0;i<x;i++)
        {
            if(m[a[i]]-m[v[i]]!=0)
                b.push_back(i+1);
        }
        int k=0;
        for(int i=0;i<x-1;i++)
        {
           k=__gcd(b[i],b[i+1]); 
        }
        cout<<k<<endl;
    }
}