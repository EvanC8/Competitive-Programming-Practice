#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool right = true;

    for (int i = 0; i < n; i++) {
        string part = "";
        while (part.length() < m) {
            part.append(i % 2 == 0 ? "#" : ".");
        }
        if (i % 2 != 0) {
            part[right ? part.length() - 1 : 0] = '#';
            right = right ? false : true;
        }

        cout << part << endl;
    }
}