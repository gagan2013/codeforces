#include <bits/stdc++.h>
using namespace std;

bool check(long long int m,long long int s)
{
    return ((m*(m+3))/2>=s);
}
int bs(long long int a)
{
    int l=0;
    int r=1e9;
    while(l<r)
    {
        int  mid=l+(r-l)/2;
        if(check(mid,a))
            r=mid;
        else
            l=mid+1;
    }
    return l;
}
int main() 
{
    long long int n,k;
    cin>>n>>k;
    long long int s=n+k;
    cout<<n-bs(s);
}