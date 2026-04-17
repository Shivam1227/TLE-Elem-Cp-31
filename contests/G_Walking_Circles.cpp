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
    unordered_map<int, int> mp;
    bool flag = false;
    for(int i = 0; i<n; i++){
        cin>>vec[i];
        mp[vec[i]]++;
        if(mp[vec[i]] >= 2) flag = true;
    }

    if(mp.size()%2 == 1 || flag){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
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
