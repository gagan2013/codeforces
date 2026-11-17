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
        int Xor=0;
        for (int i = 0; i < k; i++) 
        {
            cin>>v[i];
            Xor^=v[i];
        }
        if(k%2==0 && Xor==0)
            cout<<"3"<<endl;
        else if(k%2==0 && Xor!=0)
            cout<<"-1"<<endl;
        else 
            cout<<Xor<<endl;
    }
}