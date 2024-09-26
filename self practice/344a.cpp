#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int pole = 0;
    int groups = 0;

    for (int i = 0; i < n; i++ ) {
        int x;
        cin >> x;

        if (x != pole) {
            groups++;
            pole = x;
        }
    }
    cout << groups;
}