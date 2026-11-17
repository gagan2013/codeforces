#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> v(k);
        set<int> s;
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        for (auto c : v) {
            s.insert(c);
        }
        sort(v.begin(),v.end());
        if(s.size()==1)
            cout<<"-1"<<endl;
        else 
        {
            int c1=0;
            int c2=0;
            for(int i=1;i<k;i++)
            {
                if(v[0]==v[i])
                c1++;
            }
            c1++;
            cout<<c1<<" "<<k-c1<<endl;
            for(int i=0;i<c1;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            for(int i=c1;i<k;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}