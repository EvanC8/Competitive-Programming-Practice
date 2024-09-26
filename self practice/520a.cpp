#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    string word;
    cin >> word;

    if (n < 26) {
        cout << "NO";
        return 0;
    }

    map<string, int> letters;

    for (int i = 0; i < n; i++) {
        letters[to_string(tolower(word[i]))]++;
    }

    cout << (letters.size() < 26 ? "NO" : "YES");
}