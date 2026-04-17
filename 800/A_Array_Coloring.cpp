#include <bits/stdc++.h>
using namespace std;

void shivam(vector<int> &vec, int n){
    int even = 0;
    int odd = 0;
    for(int i : vec){
        if(i % 2 ==0){
            even++;
        }
        else odd++;
    }
    if(odd%2 == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int> vec(n);
        for(int &i : vec) cin>>i;
        shivam(vec, n);
    }
    return 0;
}
