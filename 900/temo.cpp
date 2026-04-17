#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shivam(vector<int> &vec) {
    int xorr = 0;
    for(int i : vec){
        xorr^=i;
    }
    cout<<xorr<<endl;
}   

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin>>vec[i];
    }
    shivam(vec);
    return 0;
}
