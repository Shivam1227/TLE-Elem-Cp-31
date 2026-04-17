#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

int ops(string n, string val){
    int checkValIdx = 1;
    int operations = 0;
    for(int i = n.length()-1; i>=0; i--){
        if(n[i] == val[checkValIdx]){
            checkValIdx--;
            if(checkValIdx<0){
                break;
            }
        }
        else{
            operations++;
        }
    }
    return (checkValIdx >= 0) ? INT_MAX : operations;
}

void shivam(){
    ll n;
    cin>>n;

    string s = to_string(n);
    int ans = INT_MAX;
    vector<string> poss_val = {"00", "25", "50", "75"};

    for(string val : poss_val){
        ans = min(ans, ops(s, val));
    }

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
