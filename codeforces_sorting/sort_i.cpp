#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for (int i=0; i<x; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d && d==a)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}