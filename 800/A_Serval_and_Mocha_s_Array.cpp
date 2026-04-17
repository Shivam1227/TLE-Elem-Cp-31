#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(int &n, vector<int> &vec){
    for(int i =0;i <n-1; i++){
        for(int j = i+1; j<n; j++){
            if(__gcd(vec[i], vec[j]) <= 2){
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout<<"No"<<endl;
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
        for(int i = 0; i<n; i++) cin>>vec[i];
        shivam(n, vec);
    }
    return 0;
}
