#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int correct = (s.length() == t.length());
    if (correct) 
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[s.length() - 1 - i]) 
            {
                correct = 0;
                break;
            }
        }
    }
    cout << (correct ? "YES" : "NO") << endl;
}