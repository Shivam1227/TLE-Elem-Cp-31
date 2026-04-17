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
    ll x;
    cin>>n>>x;
    vector<int> vec(n);
    for(int i = 0; i<n; i++) cin>> vec[i];

    ll maxi = 0;
    ll mini = 0;
    ll sum = 0;
    for(int i = 0; i<n; i++){
        maxi += (vec[i]+x-1)/x;
        sum += vec[i];
    }


    mini = (sum+x-1)/x;

    cout<<mini << " "<<maxi<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
