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
    string s, t;
    cin>>s>>t;

    int i = t.size()-1;
    int j = s.size()-1;

    if(i > j){
        printNo;
        return;
    }

    unordered_map<char, int> t_mp;
    for(auto ch : t){
        t_mp[ch]++;
    }

    while(j >= 0){
        if(i<0) {
            printYes;
            return;
        }

        if(s[j] == t[i]){
            t_mp[t[i]]--;
            i--;
            j--;
        }
        else{
            if(t_mp[s[j]] != 0){
                printNo;
                return;
            }
            j--;
        }
    }

    if(i<0){
        printYes;
    }
    else printNo;
    
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
