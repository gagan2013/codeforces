#include <bits/stdc++.h>
using namespace std;

 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int l=(k*(k+1))/2;
        long long int h=(n*(n+1))/2;
        long long int z=((n-k)*(n-k+1))/2;
        long long int m=h-z;
        if(l<=x && x<=m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}