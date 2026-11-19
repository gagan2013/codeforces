#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    while(x--)
    {
        int p,q,r;  //p=a q=b r=c
        cin>>p>>q>>r;
        vector<int> v(p);
        for (int i=0; i<p; i++)
        {
            cin>>v[i];
        }
        int g=v[q-1];   // g=k
        sort(v.begin(), v.end(),greater<int>());
        int s=v[r-1]; //s=m
        int o;  //o=r
        if(r<p)
            o=v[r];
        else 
            o=-1;
        if(s>g)     
            cout<<"NO"<<endl;
        else if (g==s && s==o)
            cout<<"MAYBE"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}