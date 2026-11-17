#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for (int i=0; i<x; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+(c%2))>b)
            cout<<"First"<<endl;
        else 
            cout<<"Second"<<endl;
    }
}