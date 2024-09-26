#include <iostream>

using namespace std;

int main() {
    int r, b;
    cin >> r >> b;

    int socksMatching = r <= b ? r : b;
    int socksLeft = (r - socksMatching) + (b - socksMatching);
    int pairsLeft = socksLeft % 2 == 0 ? socksLeft / 2 : (socksLeft - 1) / 2;

    cout << socksMatching << " " << pairsLeft; 

}