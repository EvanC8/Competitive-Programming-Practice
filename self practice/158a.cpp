#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int score, counter = 0;
    int kScore;

    for (int i = 1; i <= n; i++) {
        cin >> score;
        //cout << "i: " << i << endl << "score: " << score << endl << "kScore: " << kScore << endl << "counter: " << counter << endl;

        if (i <= k && score > 0) {
            counter++;
            if (i == k) { kScore = score; }
        }
        else if (i > k && score == kScore) {
            counter++;
        }
        else {
            break;
        }
    }
    cout << counter;

}