#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin>>s;
    int u=0,l=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')u++;
        if(s[i]>='a'&&s[i]<='z')l++;
    }
    for (auto &c : s)
    {
        if (u > l && c >= 'a' && c <= 'z')
        {
            c = c - 'a' + 'A';
        }
        else if (l >= u && c >= 'A' && c <= 'Z')
        {
            c = c - 'A' + 'a';
        }
    }
    cout<<s;
    
}
    

