#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int highest = 0;
    int current = 0;

    for (int i = 0; i <= n; i++) {
        int a, b;
        cin >> a >> b;

        current = current - a + b;

        if (current > highest) {
            highest = current;
        }
    }

    cout << highest;
}