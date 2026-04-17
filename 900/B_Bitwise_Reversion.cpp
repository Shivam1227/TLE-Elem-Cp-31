#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int x, y, z; cin >> x>>y>>z;
        if(x&y == y&z && x&y == x&z){
            cout<<"YES<"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}
