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

    vector<int> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];

    map<int, vector<int>> mp;

    for(int i = 0; i < n; i++){
        int mod = vec[i]%k;
        if(mod == 0){
            mp[k].push_back(i+1);
        }
        else{
            mp[mod].push_back(i+1);
        }
    }

    for (auto it = mp.rbegin(); it != mp.rend(); it++) {
        for(int i : it->second){
            cout<<i<<" ";
        }
    }


    cout<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
