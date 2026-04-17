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
    cin >>n;
    vector<int> vec(n);
    ll sum = 0;
    for(int i = 0; i<n; i++){
        cin>>vec[i];
        sum += vec[i];
    }

    ll ans = LLONG_MAX;
    int i = 0;
    int j = 0;

    ll c = 0;
    while(i < n && j < n){
        c += vec[j];
        ll curr = abs(sum - 2*c);
        while(curr >= ans && i < j){
            c -= vec[i];
            curr = abs(sum - 2*c);
            i++;
        }
        j++;
        ans = min(ans, curr);
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
