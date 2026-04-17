#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;



int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    string s;
    cin>>s;
    
    for(int i = 1; i<s.length(); i++){
        if(s[i-1] > s[i]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
