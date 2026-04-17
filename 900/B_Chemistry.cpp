#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(int &n, string &s, int k){
    unordered_map<char, int> cntLetters;
    for(char i : s){
        cntLetters[i]++;
    }
    int cntOdd = 0;
    for(auto mp : cntLetters){
        if(mp.second % 2 == 1){
            cntOdd++;
        }
    }

    if(k >= cntOdd-1){
        printYes;
    } 
    else printNo;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >>n>>k;
        string s;
        cin>>s;
        shivam(n, s, k);
    }
    return 0;
}
