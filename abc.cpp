#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,k;
    cin>>x>>k;
    vector<int> v(k);
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    vector<int> b(x);
    for(int i=0;i<x;i++)
    {
        b[i]=i+1;
    }
    vector<int> h(x,0);
    for(int i=0;i<x;i++)
    {
       reverse(b.begin(),b.begin()+v[i]);
        for(int j=0;j<v[i];j++)
        {
            h[j]=1-h[j];
        }
    }
    for(int i=0;i<x;i++)
    {
        cout<<b[i]<<endl;
    }
}