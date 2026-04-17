#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout << "YES" << endl;
#define printNo cout << "NO" << endl;

void shivam() {
    int n;
    cin >> n;

    // Store (value, original_index)
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    // Sort by value
    sort(a.begin(), a.end());

    // Extract sorted values into vec (so your logic stays the same)
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        vec[i] = a[i].first;
    }

    // Prefix sum array
    vector<ll> prefSum(n);
    prefSum[0] = vec[0];
    for (int i = 1; i < n; i++) {
        prefSum[i] = prefSum[i - 1] + vec[i];
    }

    // Answer array (in original order)
    vector<int> ans(n);

    // Your original logic (kept unchanged)
    for (int i = 0; i < n; i++) {
        int totalElements = i;
        int idx = i;

        while (idx < n) {
            int lower = lower_bound(vec.begin(), vec.end(), prefSum[idx] + 1) - vec.begin();
            lower--;

            if (lower == idx) {
                break;
            }

            totalElements += lower - idx;
            idx = lower;
        }

        // Store answer in original index using pair
        ans[a[i].second] = totalElements;
    }

    // Print answers
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) shivam();

    return 0;
}
