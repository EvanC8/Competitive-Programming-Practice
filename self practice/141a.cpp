#include <iostream>
#include <map>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    if (c.length() != b.length() + a.length()) {
        cout << "NO";
        return 0;
    }

    map<char, int> pre, post;

    for (int i = 0; i < a.length(); i++) {
        pre[a[i]]++;
    }
    for (int i = 0; i < b.length(); i++) {
        pre[b[i]]++;
    }

    for (int i = 0; i < c.length(); i++) {
        post[c[i]]++;
    }

    for (auto i : pre) {
        if (post[i.first] != i.second) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}