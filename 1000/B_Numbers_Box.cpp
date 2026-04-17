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
    ll n, m;
    cin>>n>>m;

    vector<vector<int>> vec(n, vector<int>(m, 0));
    bool zero = false;
    int sum = 0;
    int mini = INT_MAX;
    int neg = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>vec[i][j];
            mini = min(mini, abs(vec[i][j]));
            sum += abs(vec[i][j]);
            if(vec[i][j] < 0){
                neg++;
            }
            if(vec[i][j] == 0){
                zero = true;
            }
        }
    }

    if(zero || neg%2 == 0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-(2*mini)<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
