#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        int k;
        cin>>k;
        if(k%2==0)
            cout<<(k/2)-1;
        else
            cout<<(k-1)/2;
        cout<<endl;
    }
}