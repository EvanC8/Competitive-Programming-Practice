#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        double a, b;
        cin >> a >> b;

        if (a <= b) {
            count = b - a;
        }
        else {
            count = (ceil(a / b) * b) - a;
        }
        cout << count << endl;
    }
}