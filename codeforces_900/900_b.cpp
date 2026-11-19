#include <bits/stdc++.h>
using namespace std;

int main() 
{
     int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        map<char,int> m;
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }
        for (char i = 'a'; i <='z'; i++) {
            if(m[i]%2!=0)
                cnt++;
        }
        if(cnt<=k+1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}