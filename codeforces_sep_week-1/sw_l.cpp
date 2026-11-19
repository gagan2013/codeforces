#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string n;
    cin >> n;
    int cnt = 0;
    int r = 1;
    for (auto &c : n) 
    {
        if (c == '4' || c == '7') 
        cnt++;
    }
    if (cnt == 0) 
        r = 0;

    int t = cnt;
    while (t > 0) 
    {
        int d = t % 10;
        if (d != 4 && d != 7) r = 0;
        t /= 10;
    }

    if (r == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
