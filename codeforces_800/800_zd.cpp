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
        int cnt=0;
        // int sum=10;
        while(k>=10)
        {
            k=k/10;
            cnt++;
        }
        // for (int i = 1; i < cnt; i++) {
        //     sum*=10;
        // }
        //cout<<((cnt*9)+1-(10-(k/sum)))<<endl;
        cout<<k+cnt*9<<endl;
   }
}