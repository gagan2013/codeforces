#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<char> v;
    vector<char> vd;
    int cnt=0;
    for (int i=0; i<s1.size(); i++)
    {
        v.push_back(s1[i]);
    }
    for (int i=0; i<s2.size(); i++)
    {
        v.push_back(s2[i]);
    }
    for (int i=0; i<s3.size(); i++)
    {
        vd.push_back(s3[i]);
    }
    sort(v.begin(), v.end());
    sort(vd.begin(), vd.end());
    for (int i=0; i<vd.size(); i++)
    {
        if(v.size()!=vd.size())
            cnt=0;
        else if(v[i]!=vd[i])
            cnt=0;
        else if(v[i]==vd[i])
            cnt++;
    }
    if(cnt==vd.size())
        cout<<"YES";
    else
        cout<<"NO";
}
   
   
   
    
