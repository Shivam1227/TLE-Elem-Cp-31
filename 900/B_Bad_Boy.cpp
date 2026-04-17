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
    ll n, m, i, j;
    cin>>n>>m>>i>>j;

    vector<vector<ll>> vec = {{1, 1}, {1, m}, {n, 1}, {n, m}};
    ll x1;
    ll y1;
    ll x2, y2;
    ll yoyo1 = INT_MIN;
    for(auto v : vec){
        ll currDist = (abs(i-v[0]) + abs(j-v[1]));
        if(yoyo1 < currDist){
            yoyo1 = currDist;
            x1 = v[0];
            y1 = v[1];
        }
    }

    ll yoyo2 = INT_MIN;
    for(auto v : vec){
        ll currDist = (abs(x1-v[0] )+ abs(y1-v[1])) + (abs(i-v[0]) + abs(j-v[1]));
        if(yoyo2 < currDist){
            yoyo2 = currDist;
            x2 = v[0];
            y2 = v[1];
        }
    }

    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
