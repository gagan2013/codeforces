#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int g = 0; g < t; g++) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < n; i++) 
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i < k && b[n - 1 - i] > a[i]) 
                sum += b[n - 1 - i];
            else sum += a[i];
        }
        cout << sum << endl;
    }
}