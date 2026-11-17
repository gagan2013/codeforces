#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int k;
    cin>>k;
    while(k--)
    {
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        int cnt=0;
        if(q>s){
            cout<<-1<<endl;
            continue;
        }
        else
        {
            while(q<s){
                q++;
                p++;
                cnt++;
            }
            if(p<r){
                cout<<-1<<endl;
                continue;
            }
            else{
                while(p>r)
                {
                    p--;
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
}