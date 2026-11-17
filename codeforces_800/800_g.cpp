#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,g;
        cin>>s>>g;
        int cnt=0;
        while(s.find(g)==string::npos){
            cnt++;
            s+=s;
            if(cnt>6){
                cnt=-1;
                break;
            }
        }
        cout<<cnt<<endl;
    }
}