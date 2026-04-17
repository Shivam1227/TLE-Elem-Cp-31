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

    vector<int> ans(n);
    ans[n-1] = n;
    ans[n-2] = 1;

    bool pos = true;
    for(int i = n-3; i>=0; i--){
        if(pos){

            ans[i] = i+1 + ans[i+1];
            pos = false;
        }
        else{
            ans[i] = abs(i+1 - ans[i+1]);
            pos = true;
        }
    }

    for(int i : ans){
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
