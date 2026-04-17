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
    int n, k, a, b;
    cin>>n>>k>>a>>b;
    vector<pair<ll, ll>> vec(n);

    for(int i = 0; i<n; i++){
        ll x, y;
        cin>>x>>y;
        vec[i] = {x, y};
    }

    if(k == 0){
        cout<<llabs(vec[a-1].first - vec[b-1].first) + llabs(vec[a-1].second-vec[b-1].second)<<endl;
        return;
    }

    if(a <= k && b <= k){
        cout<<0<<endl;
        return;
    }

    ll ans = llabs(vec[a-1].first - vec[b-1].first) + llabs(vec[a-1].second-vec[b-1].second);        // Direct dist from a to b

    if(a <= k){
        ll minDist = LLONG_MAX;
        for(int i = 0; i<k; i++){
            ll x1 = vec[i].first;
            ll y1 = vec[i].second;
            ll x2 = vec[b-1].first;
            ll y2 = vec[b-1].second;
            ll currDist = llabs(x1-x2)+llabs(y1-y2);

            minDist = min(minDist, currDist);
        }
        ans = min(ans, minDist);
    }
    else if(b <= k){
        ll minDist = LLONG_MAX;
        for(int i = 0; i<k; i++){
            ll x1 = vec[i].first;
            ll y1 = vec[i].second;
            ll x2 = vec[a-1].first;
            ll y2 = vec[a-1].second;
            ll currDist = llabs(x1-x2)+llabs(y1-y2);

            minDist = min(minDist, currDist);
        }
        ans = min(ans, minDist);
    }
    else{
        ll minDistForA = LLONG_MAX;
        for(int i = 0; i<k; i++){
            ll x1 = vec[i].first;
            ll y1 = vec[i].second;
            ll x2 = vec[a-1].first;
            ll y2 = vec[a-1].second;
            ll currDist = llabs(x1-x2)+llabs(y1-y2);

            minDistForA = min(minDistForA, currDist);
        }

        ll minDistForB = LLONG_MAX;
        for(int i = 0; i<k; i++){
            ll x1 = vec[i].first;
            ll y1 = vec[i].second;
            ll x2 = vec[b-1].first;
            ll y2 = vec[b-1].second;
            ll currDist = llabs(x1-x2)+llabs(y1-y2);

            minDistForB = min(minDistForB, currDist);
        }

        ans = min(ans, minDistForA+minDistForB);
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
