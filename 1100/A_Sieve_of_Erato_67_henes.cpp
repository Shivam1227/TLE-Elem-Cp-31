#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void solve(vector<int>&vec, string &ans, int curr, int i){
    if(i == vec.size()){
        if(curr == 67){
            ans = "Yes";
        } 
        return;
    }
    if(curr == 67){
        ans = "Yes";
        return;
    }

    solve(vec, ans, curr*vec[i], i+1);

    solve(vec, ans, curr, i+1);
}

void shivam(){
    int n;
    cin >>n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];
    string ans = "No";
    solve(vec, ans, 1, 0);
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
