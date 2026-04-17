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
    ll a, b;
    cin>>a>>b;
    ll d = abs(a-b);
    if(a == b){
        cout<<0<<" "<<0<<endl;
        return;
    }
    cout<<d<<" ";
    cout<<min(d - (a%d), (a%d))<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
