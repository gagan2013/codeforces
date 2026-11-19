#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int Sum = 0;
        for (int i = 0; i < n; i++) {
            Sum += abs(a[i]);
        }

        cout << Sum << endl;
    }
    return 0;
}
