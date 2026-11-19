#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    string s;
    cin >> n >> s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int count = 0;
    for (char &letter : alphabet) 
    {
        char uppercase = letter - 'a' + 'A';
        int  found = 0;
        for (char c : s) 
        {
            if (c == letter || c == uppercase)
            {
                found = 1;
            }
        }
        if (found) 
        {
            count++;
        }
    }
    if (count == alphabet.length()) 
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
}