#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        vector<int> v(k);
        for (int i = 0; i < k; i++) {
            cin>>v[i];
        }
        set<int> s;
        for (auto c : v) {
            s.insert(c);    
        }
        if(s.size()==1)
            cout<<"YES"<<endl;
        else if(s.size()>2)
            cout<<"NO"<<endl;
        else{
            sort(v.begin(),v.end());
            int c1=0,c2=0;
            for (int i = 0; i <k; i++) {
                if(v[0]==v[i])
                    c1++;
                else if(v[i]==v[k-1])
                    c2++;
            }
            if((max(c1,c2)-min(c1,c2))<=1)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
    }
}