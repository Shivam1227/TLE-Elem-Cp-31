#include <bits/stdc++.h>
using namespace std;

void shivam(int x, int k){
    if(x%k != 0){
        cout<<1<<endl;
        cout<<x<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x>>k;
        shivam(x, k);
    }
    return 0;
}
