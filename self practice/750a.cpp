#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int minutesLeft = 240;

    for (int i = 1; i <= n; i++) {
        minutesLeft -= 5 * i;
        if (minutesLeft < k) {
            cout << i - 1;
            return 0;
        }
    }

    cout << n;
}