#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string n;
    cin >> n;
    
    while (n[n.length() - 1] != '}') {
        string s;
        cin >> s;
        n.append(" " + s);
    }
    
    map<char, int> letters;

    for (int i = 1; i < n.length() - 1; i += 3) {
        letters[n[i]]++;
    }
    cout << letters.size();
}