#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        vector<int> v(x);
        for (int i = 0; i < x; i++) 
        {
            cin>>v[i];
        }
        int c1=0,c2=0;
        for (int i = 0; i < x; i++) 
        {
            if(v[i]==-1)
                c1++;
            else
                c2++;
        }
        int cnt=0;
        while(c2<c1 || c1%2!=0)
        {
            c2++;
            c1--;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}