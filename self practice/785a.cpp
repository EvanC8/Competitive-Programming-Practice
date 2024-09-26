#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> shapes = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int counter = 0;

    for (int i = 0; i < n; i++) {
        string shape;
        cin >> shape;

        counter += shapes[shape];
    }

    cout << counter;
}