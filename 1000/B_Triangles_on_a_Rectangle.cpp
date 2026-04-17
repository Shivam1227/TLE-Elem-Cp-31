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
    ll w, h;
    cin>>w>>h;

    ll ans = INT_MIN;
    for(int i = 0; i<4; i++){
        int k;
        cin>>k;
        ll f;
        ll l;
        bool first = true;

        for(int j = 0; j<k; j++){
            int x;
            cin>>x;
            if(first){
                first = false;
                f = x;
            }
            l = x;
        }
        ll temp;
        if(i <= 1){
            temp = h;
        }
        else{
            temp = w;
        }
        ans = max(ans, (temp*(l - f)));
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
