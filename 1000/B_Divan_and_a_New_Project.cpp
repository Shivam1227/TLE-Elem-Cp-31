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
    cin>>n;

    vector<int> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];

    vector<pair<int, int>> temp;
    for(int i = 0; i<n;i++){
        temp.push_back({vec[i], i});
    }

    stable_sort(temp.begin(), temp.end(),
        [](auto &a, auto &b) {
            return a.first < b.first;
        });
    
    vector<ll> ans(n+1);
    int pos = 1;
    int neg = -1;
    bool flag = true;
    ans[0] = 0;
    for(int k = n-1; k>=0; k--){
        int idx = temp[k].second;
        if(flag){
            ans[idx+1] = pos++;
        }
        else{
            ans[idx+1] = neg--;
        }
        flag = !flag;
    }

    ll sum = 0;
    for(int i = 1; i<n+1; i++){
        sum += (vec[i-1]*abs(ans[i])*2);
    }

    cout<<sum<<endl;
    for(int i = 0; i<n+1; i++){
        cout<<ans[i]<<" ";
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
