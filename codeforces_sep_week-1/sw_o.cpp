#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int passengers = 0;
    int capacity = 0;

    for (int i = 0; i < n; i++) 
    {
        int exiting, entering;
        cin >> exiting >> entering;

        passengers -= exiting;
        passengers += entering;
        if (passengers > capacity)
        {
            capacity = passengers;
        }
    }

    cout << capacity << '\n';
    return 0;
}
