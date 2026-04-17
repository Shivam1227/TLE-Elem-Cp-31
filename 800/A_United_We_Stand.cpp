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
    vector<int> b;
    vector<int> c;
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        maxi = max(maxi, a[i]);
    }
    for(int i = 0; i<n; i++){
        if(a[i] == maxi){
            c.pb(a[i]);
        }
        else{
            b.pb(a[i]);
        }
    }
    if(b.size() == 0 || a.size() == 0){
        cout<<-1<<endl;
        return;
    }
    cout<<b.size()<<" ";
    cout<<c.size()<<endl;
    print(b);
    print(c);
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
