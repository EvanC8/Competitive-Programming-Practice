#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    while (k > 0) {
        k--;
        if (n % 10 != 0) {
            n--;
        }
        else {
            n = int(n / 10);
        }
    }

    cout << n;
}