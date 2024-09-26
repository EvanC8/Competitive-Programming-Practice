#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // the commented out code below also works but is a bit slower
    // int dominoes = (m % 2 != 0 && n % 2 != 0) ? ((m * n) - 1)/2 : (m * n)/2;
    // cout << dominoes;

    float dominoes = 0;

    for (int i = 1; i <= n; i++) {
        float newDominoes = (m % 2 == 0) ? m/2 : (m - 1)/2 + 0.5;
        dominoes += newDominoes;
    }
    cout << int(dominoes);
}