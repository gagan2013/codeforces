#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        int a=0;
        int b=k-1;
        while(a<b&& s[a]!=s[b]){
            a++;
            b--;
        }
        cout<<b-a+1<<endl;
    }
}