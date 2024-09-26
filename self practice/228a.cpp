#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> colors;
    int count = 0;

    for (int i = 1; i <= 4; i++) {
        int n;
        cin >> n;
        colors[n]++;
    }

    for (auto i : colors) {
        if (i.second > 1) {
            count += i.second - 1;
        }
    }
    cout << count;
}