#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int officers = 0;
    int untreatedCrimes = 0;

    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        
        officers += j;
        if (officers < 0) {
            officers = 0;
            untreatedCrimes++;
        }
    }
    cout << untreatedCrimes;
}