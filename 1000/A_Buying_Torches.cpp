#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

long long ceil_division(long long a, long long b) {
	return (a + b - 1) / b;
}
void shivam(){
    ll x, y, k;
    cin>>x>>y>>k;

    ll stksTrade = ceil_division(((y*k)+k-1), (x-1));
    ll coalTrade = k;


    cout<<stksTrade+coalTrade<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
