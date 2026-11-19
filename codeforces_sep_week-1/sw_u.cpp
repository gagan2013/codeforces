#include <bits/stdc++.h>
using namespace std;

int level[200];

int main()
{   
    int ttl;
    cin>>ttl;
    int p;cin>>p;
    for (int i = 0; i < p; i++) 
    {
        int lx;
        cin>>lx;
        level[lx]=1;
    }
    int q;cin>>q;
    for (int i = 0; i < q; i++) 
    {
        int ly;
        cin>>ly;
        level[ly]=1;
    }
    int apr=1;
    for (int i = 1; i <=ttl ; i++) 
    {
           apr &= level[i];
    }
    if(apr)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}