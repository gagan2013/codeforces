#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> v(k-1);
        for (int i = 0; i < k-1; i++) {
            cin>>v[i];
        }
        int cnt=0;
        for (int i = 0; i < k-1; i++) {
            cnt+=v[i];
        }   
        cnt=-cnt;
        cout<<cnt<<endl;
    }
}