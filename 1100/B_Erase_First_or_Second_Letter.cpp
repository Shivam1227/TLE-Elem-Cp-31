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
    cin >>n;
    string s;
    cin>>s;

    vector<int> freq(26);
    ll cnt = 0;

    for(int i = 0; i<n; i++){
        if(freq[s[i]-'a'] == 0){
            cnt += n-i;
            freq[s[i]-'a'] = 1;
        }
    }

    cout<<cnt<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
