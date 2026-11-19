#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    int d;
    cin>>d;
    int cnt=0;
    for (int i=0; i<x; i++)
    {
        int a;
        cin >> a;
        if(a+d<=5)
            cnt++;
    }
        cout<<(cnt/3)<<endl;
}