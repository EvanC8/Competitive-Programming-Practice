#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s = "EASY";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            s = "HARD";
            break;
        }
    }
    cout << s;
}