#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    if (x <= 5) {
        cout << 1;
    }
    else {
        int moves = (x % 5 == 0) ? x / 5 : x / 5 + 1;
        cout << moves;
    }
}