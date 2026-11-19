#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    while (x--)
    {
        int q;
        cin>>q;
        set<int> s;
        for(int i=0; i<q; i++)
        {
              int w;
              cin>>w;
              s.insert(w);
        }   
        bool ans=true;
        int nxt=*s.begin();
        for (auto &c :s)
        {
              if(c!=nxt)
                ans=false;
            nxt=c+1;
        }     
        if(ans==true)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}