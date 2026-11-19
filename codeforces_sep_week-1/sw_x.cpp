#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int k;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
    if(x+y==z||x+z==y||y+z==x)
        cout<<"yes";
    else 
        cout<<"no";
    cout<<endl;
    }
}