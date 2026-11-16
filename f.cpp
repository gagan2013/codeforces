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
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        int mn=INT_MAX;
        for(int i=0;i<k-1;i++)
        {
            int d=v[i+1]-v[i];
            mn=min(mn,d);
        }
        if(mn<0)
            cout<<0<<endl;
        else
            cout<<mn<<endl;
   }
}