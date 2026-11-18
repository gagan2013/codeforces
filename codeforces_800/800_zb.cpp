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
        int cnt=0;
        for (int i = 0; i < k; i++) {
            cin>>v[i];
            if(v[i]==2)
                cnt++;
        }
        if(cnt==0)
            cout<<1<<endl;
        else if(cnt%2!=0)
            cout<<"-1"<<endl;
        else if(cnt==k)
            cout<<cnt/2<<endl;  
        else{
            int sum=0;
            for (int i = 0; i < k; i++) {
                if(v[i]==2)
                    sum++;
                if(sum==cnt/2)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}