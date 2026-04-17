#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shivam(int a, int b, vector<int> &vec) {
    ll sum = 0;
    for(int i : vec){
        sum += min(i, a-1);
    }
    cout<<sum+b<<endl;
}   

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin>>a>>b>>n;
        vector<int> vec(n);
        for(int i = 0; i<n; i++){
            cin>>vec[i];
        }
        shivam(a, b, vec);
    }
    return 0;
}
