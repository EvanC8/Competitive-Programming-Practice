#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string j;
        cin >> j;
        string a = "";
        int count = 0;

        for (int m = 0; m < j.length(); m++) {
            if (j[m] != '0') {
                a += j[m];
                a.insert(a.end(), j.length() - m - 1, '0');
                a += ' ';
                count++;
            }
        }
        cout << count << endl << a << endl;
    }
}