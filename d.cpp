#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int a;
        cin>>a;
        vector<int> v(a);
        for(int j=0;j<a;j++)
        {
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        int l=0;
        int r=a-1;
        int c1=0;
        int c2=0;
        for (int i = 0; i < a; i++)
        {
            if((v[l] + v[a-1])%2!=0)
            {
                l++;
                c1++;
            }
            else    
                break;
        }
        for (int i = 0; i < a; i++)
        {
            if((v[r] + v[0])%2!=0)
            {
                r--;
                c2++;
            }
            else    
                break;
        }
        cout<<min(c1,c2)<<endl;
    }
} 
