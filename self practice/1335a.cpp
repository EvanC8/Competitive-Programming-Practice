#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        if (t <= 2) {
            cout << 0 << endl;
        }
        else if (t % 2 == 0) {
            cout << t / 2 - 1 << endl;
        }
        else {
            cout << int(floor(t/2)) << endl;
        }
    }
}