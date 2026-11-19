#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int s[55];  
    for (int i = 0; i < n; i++) 
    {
        cin >> s[i];
    }

    int a = 0;
    for (int i = 0; i < n; i++) 
    {
        if (s[i] >= s[k - 1] && s[i] > 0) 
        {
            a++;
        }
    }

    cout << a;
}