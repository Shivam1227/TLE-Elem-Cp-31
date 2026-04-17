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
    for(int i = 0; i<n; i++) cin>>vec[i];
    int s = 0;
    int cnt1 = 0;
    int cnt0 = 0;

    for(int i = 0; i<n; i++){
        s += vec[i];
        if(vec[i] == 1) cnt1++;
        if(vec[i] == 0) cnt0++;
    }

    if(cnt1 == 0){
        cout<<0<<endl;
        return;
    }

    ll ans = cnt1*pow(2, cnt0);

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
