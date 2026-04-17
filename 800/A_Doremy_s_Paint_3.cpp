#include <bits/stdc++.h>
using namespace std;

bool IsGood(vector<int> &a) {
    unordered_map<int, int> mp;
    for(int i = 0; i<a.size(); i++){
        mp[a[i]]++;
    }

    if(mp.size() > 2){
        return false;
    }

    if(mp.size() == 1) return true;

    int temp;
    bool flag = false;
    for(auto &it: mp){
        if(a.size() %2 == 0 && flag){
            if(it.second == temp) return true;
        }
        else if(a.size() % 2 == 1 && flag){
            if((it.second + 1 == temp) || (it.second == temp + 1)) return true;
        }
        flag = true;
        temp = it.second;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        cout << (IsGood(a) ? "Yes" : "No") << endl;
    }
    return 0;
}
