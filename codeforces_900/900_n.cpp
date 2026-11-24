#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int k;
        cin>>k;
        if(k<4 || k%2==1)
            cout<<-1<<endl;
        else if(k==4 || k==6)
            cout<<1<<" "<<1<<endl;
        else
        {
            k=k/2;
            cout<<(k+2)/3<<" "<<k/2<<endl;
        }
    }
}