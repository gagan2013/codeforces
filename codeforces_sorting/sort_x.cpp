#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; ++i)
    {
        int x = 7;
        vector<int> v(7);
        for (int i = 0; i < x; i++)
        {
            cin>>v[i];
        }
        int h = v[x-1];
        for (int i = 0; i < x; i++)
        {
            for (int j = i+1; j < x; j++)
            {
                for (int k = j+1; k < x; k++)
                {
                    if(v[i] + v[j] + v[k] == h){
                        cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                        break;
                    }
                }  
            }
        }
    }
}