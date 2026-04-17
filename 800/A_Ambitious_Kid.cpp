#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            a[i] = x;
            mini = min(abs(x), mini);
        }

        cout<<abs(mini)<<endl;
        
    return 0;
}
