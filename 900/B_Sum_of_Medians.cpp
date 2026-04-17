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
    ll n, k;
    cin>>n>>k;
    ll size = n*k;
    vector<ll> vec(size);
    for(int i = 0; i<size; i++){
        cin>>vec[i];
    }

    ll i = n*k;
    ll sum = 0;
    
    while(k--){
        i -= ((n/2)+1);
        sum += vec[i];
    }

    cout<<sum<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
