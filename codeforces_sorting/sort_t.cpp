#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    for (int i = 0; i < x; i++) {
        int m,n;
        cin>>m>>n;
        vector<int> v(m);
        for (int i = 0; i < m; i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]+v[1]<=n) 
                 
            cout<<"yes"<<endl;
        else if(v[v.size()-1]<=n)
            cout<<"yes"<<endl;
        else 
            cout<<"no"<<endl;  
    }
}