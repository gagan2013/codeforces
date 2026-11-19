#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    if(s.size()==2)
    {cout<<0; return 0;}
    
    string k;
    int cnt=0;
    for (int i = 1; i < s.size(); i+=3) 
    {
        k.push_back(s[i]);
    }
    int arr[26];
    for (int i = 0; i < 26; i++) 
    {
        arr[i]=0;
    }
    for (int i = 0; i < k.size(); i++) 
    {
          arr[k[i]-'a']=1;
    }
    int sum=0;
    for (int i = 0; i < 26; i++) 
    {
          sum+=arr[i];
    }
    cout<<sum;
}