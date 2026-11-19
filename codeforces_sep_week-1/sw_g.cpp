#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s,t;
    cin>>s>>t;
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]-'A'+'a';
    }
    for(int i=0;i<=t.size();i++)
    {
        if(t[i]>='A'&&t[i]<='Z')
            t[i]=t[i]-'A'+'a';
    }

    if(s>t)
        cout<<"1";
    else if(t>s)
        cout<<"-1";
    else
        cout<<"0";   
}