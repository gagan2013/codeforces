#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int bs(int n,int k,int w,vector<int> v)
{
    ll sum=0;
    ll sq=1;
    for (int i = 0; i < n; i++) {
        sum+=v[i];
        sq+=v[i]*v[i];
    }
    sum*=4;
    sq*=4;
    while((4*n)*(w*w)+(sum*w)+(sq)!=k)
    {
        w++;
    }
    return w;
}
int main() 
{
    ll n,k,w=1;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    cout<<bs(n,k,w,v)<<endl;
}