#include <iostream>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> count;
    bool again = true;

    while (again) {
        count.clear();
        s = to_string(stoi(s) + 1);
        for (int i = 0; i < s.length(); i++) {
            count[s[i]]++;
        }
        again = false;
        for (auto i : count) {
            if (i.second != 1) {
                again = true;
            }
        }
    }

    cout << s;
}