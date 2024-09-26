#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<tuple<int, int>> teams;
    int counter = 0;

    for (int i = 0; i < n; i++) {
        int h, a;
        cin >> h >> a;
        teams.push_back(make_tuple(h, a));
    }

    for (int i = 0; i < teams.size(); i++) {
        for (int j = 0; j < teams.size(); j++) {
            if (j != i && get<0>(teams[i]) == get<1>(teams[j])) {
                counter++;
            }
        }
    }

    cout << counter;

}