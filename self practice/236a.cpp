#include <iostream>
#include <map>

using namespace std;

int main() {
    string user;
    cin >> user;

    map<char, int> hash;

    for (int i = 0; i < user.length(); i++) {
        hash[user[i]]++;
    }

    if (hash.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    
}