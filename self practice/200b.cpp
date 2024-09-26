#include <iostream>

using namespace std;

int main() {
    double n;
    cin >> n;

    double x = 0;

    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        x += y;
    }
    
    cout << x / n;
}