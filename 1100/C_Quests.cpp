#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(){
    int n, k;
    cin >>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];

    long long ans = INT_MIN;
    long long curr = 0;
    int maxi = 0;
    for(int i = 0; i<min(n, k); i++){
        curr += a[i];
        maxi = max(maxi, b[i]);
        long long temp = curr + (k-i-1)*maxi;
        ans = max(ans, temp);
    }

    cout<<ans<<endl;


}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
