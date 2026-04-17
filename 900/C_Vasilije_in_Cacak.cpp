#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shivam(int n, int k, ll x) {
    ll min_Sum = 1LL * k * (k + 1) / 2;  // sum of k smallest numbers
    ll max_Sum = 1LL * n * (n + 1) / 2 - 1LL * (n - k) * (n - k + 1) / 2; // sum of k largest numbers
    
    if (x >= min_Sum && x <= max_Sum) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        ll x;
        cin >> n >> k >> x;
        shivam(n, k, x);
    }
    return 0;
}
