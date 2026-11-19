#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
            cin >> v[j];
        sort(v.begin(), v.end());
        int ans = 1799;
        for (int j = 1; j < n; j++)
            ans = min(ans, v[j] - v[j - 1]);
        cout << ans << endl;
    }
}