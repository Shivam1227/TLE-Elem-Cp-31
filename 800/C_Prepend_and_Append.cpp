#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(int &n, string &s){
    int i = 0;
    int j = n-1;
    int cnt = 0;
    while(i<=j){
        if(i == j || s[i] == s[j]){
            cout<<n-(cnt*2)<<endl;
            return;
        }
        else{
            cnt++;
            i++;
            j--;
        }
    }
    cout<<0<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        string s;
        cin>>s;
        shivam(n, s);
    }
    return 0;
}
