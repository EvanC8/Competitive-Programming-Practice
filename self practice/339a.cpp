#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int>nums;

    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i += 2) {
        nums.push_back(n[i] - '0');
    }

    sort(nums.begin(), nums.end());

    string sorted;

    for (int i = 0; i < nums.size(); i++) {
        sorted.append(to_string(nums[i]));    
        if (i != nums.size() - 1) {
            sorted.append("+");
        }
    }
    cout << sorted;
}