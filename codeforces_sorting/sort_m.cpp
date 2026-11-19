#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x; 
    cin>>x;
    for (int i = 0; i < x; i++) 
    {
        int z; 
        cin>>z;
        vector<int>v(z);
        for (int i = 0; i < z; i++) 
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int mn=v[0];
        int mx=v[z-1]; 
        if(mx == mn)
        {
            cout<<"NO"<<endl;
        }
        else if(mx > mn){
            cout<<"YES"<<endl << mx<< " " <<mn  ;
            for (int i = 1; i < z-1; i++) 
            {
                    cout << " " << v[i];
            }
            cout << endl;
        }
            
    }
}