#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;

    int counter = 0;

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '7' || n[i] == '4') {
            counter++;
        }
    }

    if (counter == 4 || counter == 7) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}