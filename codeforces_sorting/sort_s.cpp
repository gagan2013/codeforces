#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for (int i = 0; i < x; i++) {
        vector<int>v(3);
        for (int j = 0; j < 3; j++) {
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        if(v[0]==v[1] || v[1]==v[2] || v[2]==v[0])
            cout<<"0"<<endl;
        else 
            cout<<min(v[2]-v[1],v[1]-v[0])<<endl;
    }
}