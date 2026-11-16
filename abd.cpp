#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        int cnt=0;
        set<int> s;
        for (auto i : v) {
            s.insert(i);
        }
        if(s.size()==1)
            cout<<"yes"<<endl;
        else if(s.size()>2)
            cout<<"no"<<endl;
        else if(s.size()==2)
        {
            int c1=0,c2=0;
            for(auto &c : s)
            {
               c1=max(c1,c);
               c2=min(c2,c);
            }
            if(n%2==0)
            {
                if(c1==n/2 && c2==n/2)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
            else if(n%2!=0)
            {
                if((c1==(n/2) && c2==(n/2+1)) || (c1==(n/2+1) && c2==(n/2)))
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }
        }
    }
}