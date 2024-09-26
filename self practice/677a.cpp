#include <iostream>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int width = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        width += (x <= h) ? 1 : 2;
    }
     cout << width;
}