#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string stones;
    cin >> stones;

    char color = 'a';
    int a = 0;

    for (int i = 0; i < stones.length(); i++) {
        if (stones[i] != color) {
            color = stones[i];
        }
        else {
            a += 1;
        }
    }

    cout << a;
}