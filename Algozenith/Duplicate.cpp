#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(const vector<int>& nums) {
    unordered_set<int> seen;
    for (int x : nums) {
        if (seen.count(x)) return true;
        seen.insert(x);
    }
    return false;
}

int main() {
    int n;                   
    cin >> n;
    vector<int> nums(n);
    for (int& x : nums) cin >> x;

    cout << (containsDuplicate(nums) ? "YES\n" : "NO\n");
    return 0;
}
