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
    cin>>n>>k;
    vector<ll> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];

    sort(vec.begin(), vec.end());

    int i = 1;
    int j = n-1;
    ll ans = 0;

    vector<ll> preSum(n);
    preSum[0] = vec[0];

    for(int i = 1; i<n; i++){
        preSum[i] = preSum[i-1]+vec[i];
    }
    int temp = 0;
    while(temp <= k){
        int left = 2*temp;
        int right = n-(k-temp)-1;
        ll sum = preSum[right]-preSum[left]+vec[left];
        ans = max(ans, sum);
        temp++;
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
