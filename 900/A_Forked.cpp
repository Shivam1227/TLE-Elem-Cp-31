#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(ll a, ll b, ll xK, ll yK, ll xQ, ll yQ){
    set<pair<ll, ll>> king, queen;
    vector<int> dx{1, -1, 1, -1};
    vector<int> dy{1, -1, -1, 1};
    
    for(int i = 0; i<4; i++){
        king.insert(xK+dx[i]*a, yK+dy[i]*b);
        king.insert(xK+dx[i]*b, yK+dy[i]*a);

        queen.insert(xQ+dx[i]*a, yQ+dy[i]*b);
        queen.insert(xQ+dx[i]*b, yQ+dy[i]*a);
    }

    int ans = 0;
    for(auto positions: king){
        if(queen.find(positions) != queen.end()){
            ans++;
        }
    }

    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >>a>>b;
        ll xK, yK;
        cin >>xK>>yK;
        ll xQ, yQ;
        cin>>xQ>>yQ;
        shivam(a, b, xK, yK, xQ, yQ);
    }
    return 0;
}
