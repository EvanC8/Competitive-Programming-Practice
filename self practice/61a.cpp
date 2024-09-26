#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string n = "";

    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            n.append("1");
        }
        else {
            n.append("0");
        }
    }
    cout << n;
}