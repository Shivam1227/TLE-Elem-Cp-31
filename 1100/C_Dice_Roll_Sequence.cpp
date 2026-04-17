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

    vector<int> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];

    vector<bool> mark(6, false);
    int cnt = 0;

    for(int i = 1; i<n; i++){
        if(mark[vec[i-1]-1] || mark[vec[i]-1]) continue;
        if(7-vec[i] == vec[i-1] || vec[i] == vec[i-1]){
            cnt++;
        }
        mark[vec[i]-1] = true;
        mark[vec[i-1]-1] = true;

    }

    cout<<cnt<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
