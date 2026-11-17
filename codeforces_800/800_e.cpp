#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    while(x--)
    {
        int s;
        cin>>s;
        vector<int> v(s);
        for (int i=0; i<s; i++)
        {
            cin>>v[i];
        }
        if(v[0]==1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}