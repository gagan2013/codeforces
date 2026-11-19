#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for (int i=0; i<x; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            cout<<b<<" "<<a<<endl;
        else 
            cout<<a<<" "<<b<<endl;
    }
}