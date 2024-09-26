#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int minH = INT_MAX;
    int maxH = 0;

    int minI;
    int maxI;

    for (int i = 1; i <= n; i++) {
        int height;
        cin >> height;

        if (height > maxH) { 
            maxH = height; 
            maxI = i;
        }
        if (height <= minH) { 
            minH = height; 
            minI = i;
        }
    }

    int time = 0;

    time += n - minI;
    time += maxI - 1;

    if (maxI > minI) {
        time -= 1;
    }

    cout << time;
}