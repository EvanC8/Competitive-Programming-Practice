#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int a, b, c;
    int counter = 0;

    for (int i = 0; i < x; i++ ) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            counter += 1;
        }
    }

    cout << counter << endl;
}