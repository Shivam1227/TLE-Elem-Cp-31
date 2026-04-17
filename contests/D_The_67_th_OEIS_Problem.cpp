#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

// void shivam(){
//     int n;
//     cin >> n;
    
//     vector<ll> ans;
//     unordered_set<ll> st;

//     ll k = 2;

//     // while(vec.size() < n){
//     //     if(st.count(k)) {
//     //         k++;
//     //         continue;
//     //     }

//     //     ll l = k;
//     //     while(l <= (ll)1e18 && vec.size() < n){
//     //         vec.push_back(l);
//     //         st.insert(l);

//     //         if(l > (ll)1e18 / 2) break;
//     //         l *= 2;
//     //     }

//     //     k++;
//     // }

//     for(ll base = 1; ans.size() < n; base += 2){
//         ll val = base;

//         while(val <= (ll)1e18 && ans.size() < n){
//             ans.push_back(val);

//             if(val > (ll)1e18 / 2) break; // prevent overflow
//             val *= 2;
//         }
//     }


//     for(ll x : ans){
//         cout << x << " ";
//     }
//     cout << endl;
// }

vector<ll> primes;

void sieve(int limit = 200000) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
}

void shivam() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << primes[i] * primes[i + 1] << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    sieve();
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
