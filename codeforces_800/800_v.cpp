#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        if(y==1)
            cout<<"YES"<<endl;
        else if(x==y)
            cout<<"YES"<<endl;
        else if(x%2==0)
            cout<<"YES"<<endl;
        else if(x%2!=0 && y%2!=0)
            cout<<"YES"<<endl;
        else if(x%y==0)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}