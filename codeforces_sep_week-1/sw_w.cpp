#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int total = 0;
    while (n--) {
        string polyhedron;
        cin >> polyhedron;

        if (polyhedron == "Tetrahedron") total += 4;
        else if (polyhedron == "Cube") total += 6;
        else if (polyhedron == "Octahedron") total += 8;
        else if (polyhedron == "Dodecahedron") total += 12;
        else if (polyhedron == "Icosahedron") total += 20;
    }

    cout << total;
}
    