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
    int n, m;
    cin>>n>>m;
    vector<long long> vec(n);
    unordered_map<int, int> mp;
    vector<int> queries(m);
    for(int i = 0; i<n; i++) cin>>vec[i];
    for(int i = 0; i<m; i++) {
        cin>>queries[i];
        mp[queries[i]] = 1;
    }

    for(int q : queries){
        if(mp[q] == 0) continue;
        for(int i = 0; i<n; i++){
            if((vec[i] % (1<<q)) == 0){
                vec[i] += (1<<(q-1));
            }
        }
        mp[q] = 0;
    }

    for(int i = 0; i<n; i++){
        cout<<vec[i]<<" ";
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
