#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    map<char, int> wins;

    for (int i = 0; i < s.length(); i++) {
        wins[s[i]]++;
    }

    int count = 0;
    char person = 'a';

    for (auto i : wins) {
        if (i.second > count) {
            count = i.second;
            person = i.first;
        }
        else if (i.second == count) {
            person = 'F';
        }
    }

    if (person == 'D') { cout << "Danik"; }
    else if (person == 'A') { cout << "Anton"; }
    else if (person == 'F') { cout << "Friendship"; }
}