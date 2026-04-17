#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = INT_MIN;

    // Case 1: max element at the end
    ans = max(ans, *max_element(a.begin(), a.end()) - a[0]);           // fix the min and find the max in rest of the array
 
    // Case 2: min element at the beginning
    ans = max(ans, a[n-1] - *min_element(a.begin(), a.end()));             //fix the max and find the min in rest of the array

    // Case 3: rotate some middle subarray        
    for (int i = 0; i < n-1; i++) {                                      //check for consecutive elements
        ans = max(ans, a[i] - a[i+1]);
    }

    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
