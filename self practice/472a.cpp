#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int x = 4; x <= n/2; x++) {
        if (x % 2 == 0 or x % 3 == 0) {
            if ((n-x) % 2 == 0 or (n-x) % 3 == 0) {
                cout << x << " " << n-x;
                break;
            }
        }
    }
}