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
    int n;
    cin>>n;
    vector<ll> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];

    ll ans = LONG_LONG_MIN;

    if(n == 1){
        cout<<0<<endl;
        return;
    }

    for(int k = 1; k<=n/2; k++){
        if(n%k != 0) continue;

        int cnt = 0;
        ll maxi = LONG_LONG_MIN;
        ll mini = LONG_LONG_MAX;
        ll temp = 0;
        for(int i = 0; i<n; i++){
            cnt++;
            temp += vec[i];
            if(cnt == k){
                maxi = max(maxi, temp);
                mini = min(mini, temp);
                temp = 0;
                cnt = 0;
            }
        }

        ans = max(ans, (maxi-mini));

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
