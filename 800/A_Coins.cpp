#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(ll &n, ll k){
    if(n%2 == 0 || k == 1){
        printYes;
    }
    else{
        if((n-k)%2 == 0) {
            printYes;
        }
        else{
            printNo;
        }
    }

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >>n>>k;
        shivam(n, k);
    }
    return 0;
}
