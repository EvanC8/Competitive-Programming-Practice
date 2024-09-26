#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    char abc [26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    string one, two;
    cin >> one >> two;

    // int oneLastIndex = find(abc, abc + 26, tolower(one[one.length() - 1]));
    // int twoLastIndex = find(abc, abc + 26, tolower(two[two.length() - 1]));
    // char oneLastChar = tolower(one[one.length() - 1]);
    // char twoLastChar = tolower(two[two.length() - 1]);

    int oneIndex = 0;
    int twoIndex = 0;

    // for (int i = 0; i < 26; i++) {
    //     if (abc[i] == tolower(one[i]) && i + 1 > oneLastIndex) {
    //         oneLastIndex = i + 1;
    //     }
    //     if (abc[i] == tolower(two[i]) && i + 1> twoLastIndex) {
    //         twoLastIndex = i + 1;
    //     }
    // }

    for (int i = 0; i < one.length(); i++) {
        //int oneLastChar = find(abc, abc + 26, tolower(one[i]));
        //int twoLastChar = find(abc, abc + 26, tolower(two[i]));
        int oneCharIndex = distance(abc, find(abc, abc + 26, tolower(one[i])));
        int twoCharIndex = distance(abc, find(abc, abc + 26, tolower(two[i])));

        if (oneCharIndex > oneIndex) {
            oneIndex = oneCharIndex;
        }
        if (twoCharIndex > twoIndex) {
            twoIndex = twoCharIndex;
        }

    }

    if (oneIndex == twoIndex) {
        cout << 0;
    }
    else if (oneIndex < twoIndex) {
        cout << -1;
    }
    else {
        cout << 1;
    }

}