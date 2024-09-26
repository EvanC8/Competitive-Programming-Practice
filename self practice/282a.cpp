#include <iostream>

using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    string operation;
    for (; n > 0; n--) {
        cin >> operation;
        x += (operation == "++X" || operation == "X++") ? 1 : -1;
    }

    cout << x;
}