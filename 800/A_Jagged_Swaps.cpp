#include <bits/stdc++.h>
using namespace std;

bool canBeSorted(vector<int> a) {
    int n = a.size();
    bool changed;

    // Apply operations as long as we are making changes
    do {
        changed = false;
        for (int i = 1; i < n - 1; i++) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                changed = true;
            }
        }
    } while (changed);

    // Check if sorted
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        cout << (canBeSorted(a) ? "YES" : "NO") << endl;
    }
    return 0;
}
