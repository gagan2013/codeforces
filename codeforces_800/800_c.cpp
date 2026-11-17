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
        vector<char> v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        int cnt=0,p=0,m=0;
        for(int i=0;i<k;i++){
            if(v[i]=='.')
            {
                cnt++;
                p++;
                m=max(m,cnt);
            }
            else
                cnt=0;
        }
        if(m>=3)
            cout<<"2"<<endl;
        else
            cout<<p<<endl;
    }
}
// ##..##..