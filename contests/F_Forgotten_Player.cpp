#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

vector<ll> fact(1e6+1);
const ll MOD = 998244353;

void shivam(){
    
    int n;
    cin>>n;

    ll ans = (fact[n]*(n-2))%998244353;

    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;

    fact[0] = 0;
    fact[1] = 1;
    for(int i = 2; i<=1e6; i++){
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    while (t--) shivam();
    return 0;
}
