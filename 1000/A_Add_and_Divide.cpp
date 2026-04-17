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

    ll ans = INT_MAX;;

    for(int i = 0; i<32; i++){
        ll op = i;
        ll new_b = b+i;

        if(new_b == 1){
            continue;
        }
        ll temp_a = a;
        while(temp_a > 0){
            temp_a /= new_b;
            op++;
        }

        ans = min(ans, op);
    }

    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
