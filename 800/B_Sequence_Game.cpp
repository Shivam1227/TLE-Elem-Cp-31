#include <bits/stdc++.h>
using namespace std;

#define pb push_back

void print(vector<int> &ans){
    for(int i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

void shivam(vector<int> &a, int n){
    vector<int> ans;
    ans.pb(a[0]);
    for(int i = 1; i<n; i++){
        if(a[i-1] < a[i] && a[i-1] - 1 != 0){
            ans.push_back(a[i-1] - 1);
        }
        else if(a[i-1] > a[i]){
            ans.pb(a[i]);
        }
        ans.pb(a[i]);
    }
    cout<<ans.size()<<endl;
    print(ans);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        shivam(a, n);
    }
    return 0;
}
