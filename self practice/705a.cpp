#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string final = "";

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            final.append("I hate ");
        }
        else {
            final.append("I love ");
        }
        final.append((i != n) ? "that " : "it");
    }
    cout << final;
}