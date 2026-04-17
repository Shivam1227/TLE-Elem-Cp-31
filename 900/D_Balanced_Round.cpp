#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shivam(int n, vector<int> &vec, int k) {
    sort(vec.begin(), vec.end());
    int cnt = 1;
    int maxcnt = 0;
    for(int i = 1;i <n; i++){
        if(abs(vec[i]-vec[i-1]) <= k){
            cnt++;
        }
        else{
            maxcnt = max(maxcnt, cnt);
            cnt = 1;
        }
    }
    maxcnt = max(maxcnt, cnt);
    cout<<n-maxcnt<<endl;
}   

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i = 0; i<n; i++){
            cin>>vec[i];
        }
        shivam(n, vec, k);
    }
    return 0;
}
