#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> levels;

    for (int i = 1; i <= n; i++) {
        levels[i] = 0;
    }

    for (int i = 0; i <= 1; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int y;
            cin >> y;
            levels[y]++;
        }
    }

    string s = "I become the guy.";

    for (auto i : levels) {
        if (i.second < 1) {
            s = "Oh, my keyboard!";
            break;
        }
    }
    cout << s;

}