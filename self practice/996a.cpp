#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int money;
    cin >> money;

    int dollarsCount = 0;
    int bills [5] = {100, 20, 10, 5, 1};

    for(int i = 0; i < 5; i++) {
        int dollars = floor(money / bills[i]);
        money -= dollars * bills[i];
        dollarsCount += dollars;

        if (money == 0) {
            break;
        }

    }

    cout << dollarsCount;
}