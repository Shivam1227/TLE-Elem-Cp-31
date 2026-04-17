#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for(int i = 0; i<n; i++) 

void shivam(int &n, vector<int> &vec){
    int cnt = 0;
    int maxi = INT_MIN;
    rep(i, n){
        if(vec[i] == 0) cnt++;
        else{
            maxi = max(cnt, maxi);
            cnt = 0;
        }
    }
    maxi = max(cnt, maxi);
    cout<<maxi<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int> vec(n);
        rep(i, n) cin>>vec[i];
        shivam(n, vec);
    }
    return 0;
}
