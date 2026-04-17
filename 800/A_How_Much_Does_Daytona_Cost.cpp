#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        bool found= false;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            a[i] = x;
            if(x == k){
                found = true;
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
