#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for (int i=0; i<x; i++)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        int a=0;
        int b=0;
        for (int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for (int i=0; i<n; i++)
        {
            if(v[i]%2==0)
                b++;
            else 
                a++;
        }
        if(a>0 && b>0)
            sort(v.begin(), v.end());
        for (int i=0; i<n; i++)
        {
            cout<<v[i];
            cout<<" ";
        }
        cout<<endl;
    }
}