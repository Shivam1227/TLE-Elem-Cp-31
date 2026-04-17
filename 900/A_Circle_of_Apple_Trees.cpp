#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        unordered_set<long long> st;
        for (int i = 0; i < n; ++i) {
            long long x; cin >> x;
            st.insert(x);
        }
        cout << st.size() << '\n';
    }
    return 0;
}
