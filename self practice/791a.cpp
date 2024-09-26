#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;

    while (a <= b) {
        years += 1;
        a *= 3;
        b *= 2;
        if (a > b) {
            cout << years;
        }
    }
}