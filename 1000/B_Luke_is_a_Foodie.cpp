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
    ll n, x;
    cin>>n>>x;

    vector<ll> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];

    ll cnt = 0;
    ll upLim = vec[0]+x;
    ll lowLim = vec[0]-x;

    for(int i = 1; i<n; i++){
        ll currUp = vec[i] + x;
        ll currLow = vec[i] - x;

        // Check overlap
        if (max(lowLim, currLow) <= min(upLim, currUp)) {      //if overlap means current range is valid
            // shrink intersection
            lowLim = max(lowLim, currLow);
            upLim  = min(upLim, currUp);
        } else {
            // reset
            cnt++;
            lowLim = currLow;
            upLim  = currUp;
        }
    }
    
    cout<<cnt<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
