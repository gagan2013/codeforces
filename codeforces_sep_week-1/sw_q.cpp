#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    float sum = 0;
    for (int i = 0; i < n; i++) 
    {
        int p;
        cin >> p;
        if (p >= 0)
        {
            sum += p;
        }
    }
    float avg = sum / n;
    cout << avg << endl;
}