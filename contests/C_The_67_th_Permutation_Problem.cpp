#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(){
    int n;
    cin>>n;
    vector<int> vec;
    int k = 3*n;
    for(int i = 1; i<=n; i++){
        vec.push_back(i);
        vec.push_back(k-1);
        vec.push_back(k);
        k -= 2;

    }

    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
